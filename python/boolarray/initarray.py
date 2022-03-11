ary = [False] * 4

print(ary)  # [False, False, False, False]

ary = [False for _ in range(4)]

print(ary)  # [False, False, False, False]

ary = [bool(i % 2) for i in range(4)]

print(ary)  # [False, True, False, True]

ary = [bool(i % 2 == 0) for i in range(4)]

print(ary)  # [True, False, True, False]

mat = [[False for _ in range(2)] for _ in range(3)]

print(mat)  # [[False, False], [False, False], [False, False]]
