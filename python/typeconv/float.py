n = float(1)

print(n)  # 1.0

n = float("3.14")

print(n)  # 3.14

try:
    n = float([1, 2, 3])
except TypeError as e:
    print(e)
    # float() argument must be a string, a bytes-like object or a number, not 'list'

try:
    n = float({'a': 1})
except TypeError as e:
    print(e)
    # float() argument must be a string, a bytes-like object or a number, not 'dict'

try:
    n = float((1, 2))
except TypeError as e:
    print(e)
    # float() argument must be a string, a bytes-like object or a number, not 'tuple'

try:
    n = float({1, 2})
except TypeError as e:
    print(e)
    # float() argument must be a string, a bytes-like object or a number, not 'set'

try:
    n = float(None)
except TypeError as e:
    print(e)
    # float() argument must be a string, a bytes-like object or a number, not 'NoneType'
