l = [3, 1, 2]
l = sorted(l)
print(l)
# [1, 2, 3]


l = ['abc', 'f', 'de']
l = sorted(l, key=lambda s: len(s))
print(l)
# ['f', 'de', 'abc']
