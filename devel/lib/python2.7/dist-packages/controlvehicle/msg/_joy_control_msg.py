"""autogenerated by genpy from controlvehicle/joy_control_msg.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class joy_control_msg(genpy.Message):
  _md5sum = "499cf4e3d592166be607da2914a0e4a0"
  _type = "controlvehicle/joy_control_msg"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 sequence
int8 speed
int8 powerLR

"""
  __slots__ = ['sequence','speed','powerLR']
  _slot_types = ['uint8','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sequence,speed,powerLR

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(joy_control_msg, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.sequence is None:
        self.sequence = 0
      if self.speed is None:
        self.speed = 0
      if self.powerLR is None:
        self.powerLR = 0
    else:
      self.sequence = 0
      self.speed = 0
      self.powerLR = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_B2b.pack(_x.sequence, _x.speed, _x.powerLR))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.sequence, _x.speed, _x.powerLR,) = _struct_B2b.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_B2b.pack(_x.sequence, _x.speed, _x.powerLR))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.sequence, _x.speed, _x.powerLR,) = _struct_B2b.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B2b = struct.Struct("<B2b")
