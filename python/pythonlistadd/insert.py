lis = [1, 2, 3]

lis.insert(0, 4)  # 添え字0の位置に4を挿入

print(lis)  # [4, 1, 2, 3]


lis = [1, 2, 3]

lis.insert(2, 4)  # 添え字2の位置に4を挿入

print(lis)  # [1, 2, 4, 3]


lis = [1, 2, 3]

lis.insert(len(lis), 4)  # リストの末尾に4を挿入

print(lis)  # [1, 2, 3, 4]
