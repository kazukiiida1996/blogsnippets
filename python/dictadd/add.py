d = {'a': 1, 'b': 2}

d['c'] = 3  # キーがc, 値が3


d = {'a': 1, 'b': 2}
lis = [('c', 3), ('d', 4)]

for k, v in lis:
    d[k] = v

print(d)
# {'a': 1, 'b': 2, 'c': 3, 'd': 4}


d = {'a': 1, 'b': 2}
l1 = ['c', 'd']
l2 = [3, 4]

for k, v in zip(l1, l2):
    d[k] = v

print(d)
# {'a': 1, 'b': 2, 'c': 3, 'd': 4}