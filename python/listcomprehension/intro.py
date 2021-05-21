# ↓のようなfor文が
lis = []
for i in range(4):
    lis.append(i)
print(lis)
# [0, 1, 2, 3]

# 内包表を使うと↓のように書ける
lis = [i for i in range(4)]
print(lis)
# [0, 1, 2, 3]
