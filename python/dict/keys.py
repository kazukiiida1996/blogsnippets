d = {'a': 1, 'b': 2}

keys = d.keys()
print(type(keys))
# <class 'dict_keys'>


l = list(keys)
print(l)
# ['a', 'b']


for k in d.keys():
    print(k)
    # a
    # b
