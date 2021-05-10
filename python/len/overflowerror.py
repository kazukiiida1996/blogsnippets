import sys


print(sys.maxsize)
# 9223372036854775807

try:
    len(range(2 ** 100))
except OverflowError as e:
    print(e)
    # Python int too large to convert to C ssize_t
