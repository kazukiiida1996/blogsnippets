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
