l = [1, 2, 3]

try:
    l.index(4)
except ValueError as e:
    print(e)
    # 4 is not in list
    