def genary(val, size):
    return [val] * size

l = genary(0, 3)

print(l)  # [0, 0, 0]

def genary2(val, size):
    l = []
    for _ in range(size):
        l.append(val)
    return l

l = genary2(0, 3)

print(l)  # [0, 0, 0]
