try:
    d = dict(1)
except TypeError as e:
    print(e)  # 'int' object is not iterable

try:
    d = dict(3.14)
except TypeError as e:
    print(e)  # 'float' object is not iterable

try:
    d = dict(None)
except TypeError as e:
    print(e)  # 'NoneType' object is not iterable

try:
    d = dict("123")
except ValueError as e:
    print(e)  # dictionary update sequence element #0 has length 1; 2 is required

try:
    d = dict((1, 2, 3))
except TypeError as e:
    print(e)  # cannot convert dictionary update sequence element #0 to a sequence

try:
    d = dict({'a': 1, 'b': 2})
except TypeError as e:
    print(e)  # cannot convert dictionary update sequence element #0 to a sequence

try:
    d = dict({1, 2, 3})
except TypeError as e:
    print(e)  # cannot convert dictionary update sequence element #0 to a sequence

l1 = ['a', 'b']
l2 = [1, 2]

d = dict(zip(l1, l2))
print(d)  # {'a': 1, 'b': 2}
