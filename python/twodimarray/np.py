import numpy as np


twoarr = np.array([
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
])
print(twoarr)
# [[0 1 2]
#  [3 4 5]
#  [6 7 8]]

print(twoarr[0][1])  # 1
print(twoarr[1][2])  # 5


twoarr = np.arange(12).reshape(3, 4)
print(twoarr)
# [[ 0  1  2  3]
#  [ 4  5  6  7]
#  [ 8  9 10 11]]