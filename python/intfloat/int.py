n = int()
print(n)
# 0


n = int(3.14)
print(n)
# 3


n = int('1')
print(n)
# 1


n = int(b'12')
print(n)
# 12


arr = bytearray(b'123')
n = int(arr)
print(n)
# 123


try:
    int('abc')
except ValueError as e:
    print(e)
    # invalid literal for int() with base 10: 'abc'


try:
    int(None)
except TypeError as e:
    print(e)
    # int() argument must be a string, a bytes-like object or a number, not 'NoneType'
