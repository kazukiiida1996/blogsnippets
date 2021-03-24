from collections import Counter

l = ['a', 'a', 'a', 'b', 'b', 'c']
c = Counter(l)

print(c)
# Counter({'a': 3, 'b': 2, 'c': 1})

print(c['a'])
# 3

print(c['b'])
# 2

print(c['c'])
# 1
