# 追加
lis = [1, 2]
lis.append(3)  # 3という値をlisの末尾に追加する
print(lis)
# [3]

# 挿入
lis = [1, 2]
lis.insert(0, 3)  # lisの0番目の位置に値3を挿入する
print(lis)
# [3, 1, 2]

# 連結
lis1 = [1, 2]
lis2 = [3, 4]
lis1.extend(lis2)  # lis1の末尾にlis2を連結する
print(lis1)
# [1, 2, 3, 4]


lis = [1, 2, 3]

lis.append(4)
print(lis)
# [1, 2, 3, 4]

lis.append(5)
print(lis)
# [1, 2, 3, 4, 5]


lis = [1, 2, 3]

lis.extend([4, 5])
print(lis)
# [1, 2, 3, 4, 5]

lis.extend((6, 7))
print(lis)
# [1, 2, 3, 4, 5, 6, 7]

lis.extend({'a': 1, 'b': 2})
print(lis)
# [1, 2, 3, 4, 5, 6, 7, 'a', 'b']


lis = [1, 2, 3]

lis.insert(0, 4)  # lisの0番目の位置に値4を挿入する
print(lis)
# [4, 1, 2, 3]

lis.insert(2, 5)  # lisの2番目の位置に値5を挿入する
print(lis)
# [4, 1, 5, 2, 3]
