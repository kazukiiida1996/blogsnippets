def func(a, b, /, c):
    print(a, b, c)

func(1, 2, 3)
# 1 2 3

func(1, 2, c=3)
# 1 2 3

try:
    func(a=1, b=2, c=3)
except TypeError as e:
    print(e)
    # func() got some positional-only arguments passed as keyword arguments: 'a, b'
