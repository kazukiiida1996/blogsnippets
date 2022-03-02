try:
    l = tuple(1)
except TypeError as e:
    print(e)  # 'int' object is not iterable

try:
    l = tuple(3.14)
except TypeError as e:
    print(e)  # 'float' object is not iterable

try:
    l = tuple(None)
except TypeError as e:
    print(e)  # 'NoneType' object is not iterable

l = tuple("123")
print(l)  # ('1', '2', '3')

l = tuple([1, 2, 3])
print(l)  # (1, 2, 3)

l = tuple({'a': 1, 'b': 2})
print(l)  # ('a', 'b')

l = tuple({1, 2, 3})
print(l)  # (1, 2, 3)

