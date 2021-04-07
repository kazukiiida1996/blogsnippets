lis = [1, 2, 3]

for el in lis:
    print(el)
# 1
# 2
# 3


lis = [1, 2, 3]

for el in lis[::-1]:
    print(el)
# 3
# 2
# 1


lis = [1, 2, 3]

for i in range(len(lis)):
    print(lis[i])
# 1
# 2
# 3


lis = [1, 2, 3]

for i in range(len(lis)):
    print(i)
# 0
# 1
# 2


lis = [1, 2, 3]

for i in range(len(lis) - 1, -1, -1):
    print(lis[i])
# 3
# 2
# 1

