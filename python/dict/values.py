d = {'a': 1, 'b': 2}

values = d.values()
print(type(values))
# <class 'dict_values'>


l = list(values)
print(l)
# [1, 2]


for v in d.values():
    print(v)
    # 1
    # 2
