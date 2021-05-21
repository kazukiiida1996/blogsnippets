g = (i for i in range(4))
print(g)
# <generator object <genexpr> at 0x1234>


g = (i for i in range(4))
print(next(g))  # 0
print(next(g))  # 1
print(next(g))  # 2
print(next(g))  # 3


def gen():
    for i in range(4):
        yield i

g = gen()
print(g)
# <generator object gen at 0x1234>
