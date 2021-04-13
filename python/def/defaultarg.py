def func(a=1, b=2):
    print(a, b)

func()
# 1 2

func(10)
# 10 2

func(10, 20)
# 10 20


def func(a=10, b):
    print(a, b)

#        def func(a=10, b):
#             ^
# SyntaxError: non-default argument follows default argument
