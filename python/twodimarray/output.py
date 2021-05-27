twoarr = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
]

for arr in twoarr:
    for el in arr:
        print(el)
# 0
# 1
# 2
# 3
# 4
# 5
# 6
# 7
# 8


twoarr = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
]

for i in range(len(twoarr)):
    for j in range(len(twoarr[i])):
        print(twoarr[i][j])
# 0
# 1
# 2
# 3
# 4
# 5
# 6
# 7
# 8


twoarr = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
]

for i in range(len(twoarr)):
    for j in range(len(twoarr[i])):
        print(f'i = {i}, j = {j}')
