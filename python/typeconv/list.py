try:
    l = list(1)
except TypeError as e:
    print(e)  # 'int' object is not iterable

try:
    l = list(3.14)
except TypeError as e:
    print(e)  # 'float' object is not iterable

try:
    l = list(None)
except TypeError as e:
    print(e)  # 'NoneType' object is not iterable

l = list("123")
print(l)  # ['1', '2', '3']

l = list((1, 2, 3))
print(l)  # [1, 2, 3]

l = list({'a': 1, 'b': 2})
print(l)  # ['a', 'b']

l = list({1, 2, 3})
print(l)  # [1, 2, 3]

