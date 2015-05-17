#!/usr/bin/env python
import rospy
import time
import math
from controlvehicle.msg import ardu_imu
from geometry_msgs.msg import Vector3

#Gravity Acceleration value
GRAVITY = 9.8115

## Function to count distance from strart point 
class distanceMeter(object):

    ##Object initialization
    def __init__(self, medianVal):
	self.angle = []
	self.acc = [] 
	self.distSum = 0
	self.index = 0
	self.index2 = 0
	self.medAngle = 0
	self.medAcc = 0
	self.speed = 0
	self.oldAccResult = 0
	self.medianValue = medianVal
	self.time = time.time()
        rospy.init_node('distanceMeter', anonymous=True)

    ##init subscribers
    def subscribeDistance(self):
        rospy.Subscriber("mgeuler", Vector3, self.angleCallback)
        rospy.Subscriber("imu", ardu_imu, self.accCallback)
	
	rospy.spin()
    #Accelerometer Callback
    def accCallback(self, aimu):
	if self.index2 == self.medianValue:
	    self.medAcc = self.median(self.acc)
	    self.acc = []
	    self.index2 = 0
	self.acc.append(aimu.accValues.y)
	self.index2 = self.index2 + 1 
	
    #Angles Callback
    def angleCallback(self, euler):
	if self.index == self.medianValue:
	    self.medAngle = self.median(self.angle)
	    self.angle = []
	    self.index = 0
	    self.calculateResAc()
	self.angle.append(euler.y)
	self.index = self.index + 1 
       

    #Calculate median from array
    def median(self, mlist):
        mlist.sort()
	mednum = int(len(mlist)/2)
	return mlist[mednum]

    #Calculate resultant acceleration
    def calculateResAc(self):
	accResult = GRAVITY*self.medAcc + GRAVITY*math.sin((self.medAngle*math.pi)/180)
	auxmil = time.time() - self.time
	millis = float(((auxmil) - int(auxmil)))	
	if(abs(accResult) < 1): 
	    accResult = 0
	if(accResult != 0):
	    speed = accResult*millis + self.speed
	    self.speed = speed
	print str(accResult) + "  " + speed
	self.time = time.time()
	self.oldAccResult = accResult
	
	
if __name__ == '__main__':

    distObj = distanceMeter(3)
    distObj.subscribeDistance() 

    


