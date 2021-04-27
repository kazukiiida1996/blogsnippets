n = float()
print(n)
# 0.0


n = float(123)
print(n)
# 123.0


n = float('3.14')
print(n)
# 3.14

n = float('   -1.23   ')
print(n)
# -1.23


n = float(b'3.14')
print(n)
# 3.14


arr = bytearray(b'3.14')
n = float(arr)
print(n)
# 3.14


print(float('infinity'))  # inf
print(float('INFINITY'))  # inf
print(float('inf'))  # inf
print(float('INF'))  # inf
print(float('nan'))  # nan
print(float('NAN'))  # nan
print(float('+infinity'))  # inf
print(float('-INFINITY'))  # -inf


try:
    float('abc')
except ValueError as e:
    print(e)
    # could not convert string to float: 'abc'

try:
    float(None)
except TypeError as e:
    print(e)
    # float() argument must be a string or a number, not 'NoneType'
