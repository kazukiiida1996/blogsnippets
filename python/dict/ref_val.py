d = {'a': 1, 'b': 2}

print(d['a'])
# 1


try:
    d['c']
except KeyError as e:
    print(e)
    # 'c'


d['b'] = 3

print(d)
# {'a': 1, 'b': 3}
