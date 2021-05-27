twoarr = [
    [0, 1, 2],
    [3, 4, 5],
]

twoarr.append([6, 7, 8])

print(twoarr)
# [[0, 1, 2], [3, 4, 5], [6, 7, 8]]


twoarr = [
    [0, 1, 2],
    [3, 4, 5],
]

twoarr[0].append(6)

print(twoarr)
# [[0, 1, 2, 6], [3, 4, 5]]


twoarr = [
    [0, 1, 2],
    [3, 4, 5],
]

twoarr.insert(0, [6, 7, 8])

print(twoarr)
# [[6, 7, 8], [0, 1, 2], [3, 4, 5]]


twoarr = [
    [0, 1, 2],
    [3, 4, 5],
]

twoarr[1].insert(0, 6)

print(twoarr)
# [[0, 1, 2], [6, 3, 4, 5]]
