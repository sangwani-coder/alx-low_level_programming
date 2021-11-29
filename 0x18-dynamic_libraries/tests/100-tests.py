import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = 10
b = 40
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
