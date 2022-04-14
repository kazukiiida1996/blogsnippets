l = [0] * 3

print(l)  # [0, 0, 0]

l = [0, 1, 2] * 3

print(l)  # [0, 1, 2, 0, 1, 2, 0, 1, 2]

l = [[0, 1, 2]] * 3

print(l)  # [[0, 1, 2], [0, 1, 2], [0, 1, 2]]

l[0][0] = 9

print(l)  # [[9, 1, 2], [9, 1, 2], [9, 1, 2]]

l = [[0, 1, 2] for i in range(3)]
l[0][0] = 9

print(l)  # [[9, 1, 2], [0, 1, 2], [0, 1, 2]]