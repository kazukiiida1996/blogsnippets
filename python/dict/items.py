d = {'a': 1, 'b': 2}

items = d.items()

print(type(items))
# <class 'dict_items'>


l = list(items)
print(l)
# [('a', 1), ('b', 2)]


for k, v in d.items():
    print(k, v)
    # a 1
    # b 2