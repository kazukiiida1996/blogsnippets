n = int("20")

print(n)  # 20

n = int(3.14)

print(n)  # 3

try:
    n = int([1, 2, 3])
except TypeError as e:
    print(e)
    # int() argument must be a string, a bytes-like object or a number, not 'list'

try:
    n = int({'a': 1})
except TypeError as e:
    print(e)
    # int() argument must be a string, a bytes-like object or a number, not 'dict'

try:
    n = int((1, 2))
except TypeError as e:
    print(e)
    # int() argument must be a string, a bytes-like object or a number, not 'tuple'

try:
    n = int({1, 2})
except TypeError as e:
    print(e)
    # int() argument must be a string, a bytes-like object or a number, not 'set'

try:
    n = int(None)
except TypeError as e:
    print(e)
    # int() argument must be a string, a bytes-like object or a number, not 'NoneType'
