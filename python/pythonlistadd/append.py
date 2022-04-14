lis = [1, 2, 3]

lis.append(4)  # リストの末尾にデータ（4）を追加

print(lis)  # [1, 2, 3, 4]


lis = []

lis.append('abc')
lis.append((1, 2))
lis.append([3, 4])
lis.append({'a': 5})
lis.append({6, 7})
lis.append(True)
lis.append(None)

print(lis)
# ['abc', (1, 2), [3, 4], {'a': 5}, {6, 7}, True, None]
