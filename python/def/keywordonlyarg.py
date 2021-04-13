def func(a, b, *, c):
    print(a, b, c)


func(1, 2, c=3)
# 1 2 3

func(a=1, b=2, c=3)
# 1 2 3

try:
    func(1, 2, 3)
except TypeError as e:
    print(e)
    # func() takes 2 positional arguments but 3 were given
    