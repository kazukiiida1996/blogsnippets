d1 = {'a': 1, 'b': 2}
d2 = {'c': 3, 'd': 4}

d1.update(d2)
print(d1)
# {'a': 1, 'b': 2, 'c': 3, 'd': 4}


d1 = {'a': 1, 'b': 2}
d2 = {'b': 3, 'c': 4}

d1.update(d2)
print(d1)
# {'a': 1, 'b': 3, 'c': 4}


d1 = {'a': 1, 'b': 2}
l1 = ['c', 'd']
l2 = [3, 4]

d1.update(zip(l1, l2))
print(d1)
# {'a': 1, 'b': 2, 'c': 3, 'd': 4}


d1 = {'a': 1, 'b': 2}

d1.update(c=3, d=4)
print(d1)
# {'a': 1, 'b': 2, 'c': 3, 'd': 4}