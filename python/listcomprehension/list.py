lis = [i for i in range(4)]
print(lis)
# [0, 1, 2, 3]


lis = []
for i in range(4):
    lis.append(i)
print(lis)
# [0, 1, 2, 3]


# 偶数のみ保存
lis = [i for i in range(4) if i % 2 == 0]
print(lis)
# [0, 2]


# 奇数のみ保存
lis = [i for i in range(4) if i % 2 != 0]
print(lis)
# [1, 3]


# 偶数以外は-1で保存
lis = [i if i % 2 == 0 else -1 for i in range(4)]
print(lis)
# [0, -1, 2, -1]


matrix = [[i for i in range(4)] for i in range(2)]
print(matrix)
# [[0, 1, 2, 3], [0, 1, 2, 3]]


lis1 = ['cat', 'dog', 'bird', 'pig']
lis2 = [0, 1, 2, 3]
lis3 = [kv for kv in zip(lis1, lis2)]
print(lis3)
# [('cat', 0), ('dog', 1), ('bird', 2), ('pig', 3)]


lis1 = ['cat', 'dog', 'bird', 'pig']
lis2 = [0, 1, 2, 3]
lis3 = [(v, k) for k, v in zip(lis1, lis2)]
print(lis3)
# [(0, 'cat'), (1, 'dog'), (2, 'bird'), (3, 'pig')]


lis1 = ['cat', 'dog', 'bird', 'pig']
lis2 = [(i, v) for i, v in enumerate(lis1)]
print(lis2)
# [(0, 'cat'), (1, 'dog'), (2, 'bird'), (3, 'pig')]
