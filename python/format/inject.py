s = '{} is {}'.format('age', 20)
print(s)
# age is 20


s = '{0} is {1}'.format('cat', 'animal')
print(s)
# cat is animal

s = '{1} is {0}'.format('cat', 'animal')
print(s)
# animal is cat


s = '{left} is {right}'.format(left='cat', right='animal')
print(s)
# cat is animal


lis1 = [1, 2]
lis2 = [3, 4]
s = '{0[0]} and {0[1]}. {1[0]} and {1[1]}'.format(lis1, lis2)
print(s)
# 1 and 2. 3 and 4

lis1 = [1, 2]
lis2 = [3, 4]
s = '{left[0]} and {left[1]}. {right[0]} and {right[1]}'.format(left=lis1, right=lis2)
print(s)
# 1 and 2. 3 and 4


d1 = {'a': 1, 'b': 2}
d2 = {'c': 3, 'd': 4}
s = '{0[a]} and {0[b]}. {1[c]} and {1[d]}'.format(d1, d2)
print(s)
# 1 and 2. 3 and 4
