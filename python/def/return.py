def func():
    return 1

print(func())
# 1


def func():
    pass

print(func())
# None


def func():
    return 1, 2

print(func())
# (1, 2)

a, b = func()
print(a, b)
# 1 2