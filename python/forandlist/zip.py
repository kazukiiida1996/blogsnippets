lis1 = ['a', 'b', 'c']
lis2 = [1, 2, 3]

for tup in zip(lis1, lis2):
    print(tup)
# ('a', 1)
# ('b', 2)
# ('c', 3)


lis1 = ['a', 'b', 'c']
lis2 = [1, 2, 3]

for i, el in zip(lis1, lis2):
    print(i, el)
# a 1
# b 2
# c 3
