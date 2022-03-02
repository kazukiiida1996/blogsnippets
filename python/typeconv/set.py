try:
    s = set(1)
except TypeError as e:
    print(e)  # 'int' object is not iterable

try:
    s = set(3.14)
except TypeError as e:
    print(e)  # 'float' object is not iterable

try:
    s = set(None)
except TypeError as e:
    print(e)  # 'NoneType' object is not iterable

s = set("123")
print(s)  # {'1', '2', '3'}

s = set((1, 2, 3))
print(s)  # {1, 2, 3}

s = set({'a': 1, 'b': 2})
print(s)  # {'a', 'b'}

s = set({1, 2, 3})
print(s)  # {1, 2, 3}
