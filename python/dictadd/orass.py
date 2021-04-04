d1 = {'a': 1, 'b': 2}
d2 = {'c': 3, 'd': 4}

d1 |= d2

print(d1)
# {'a': 1, 'b': 2, 'c': 3, 'd': 4}


d1 = {'a': 1, 'b': 2}
d2 = [('c', 3), ('d', 4)]

d1 |= d2

print(d1)
# {'a': 1, 'b': 2, 'd': 4, 'c': 3}


d1 = {'a': 1, 'b': 2}
d2 = [('c', 3), ('d', 4)]

try:
    d3 = d1 | d2
except TypeError as e:
    print(e)
    # unsupported operand type(s) for |: 'dict' and 'set'
