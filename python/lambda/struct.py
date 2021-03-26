func = lambda: 1
print(type(func))
# <class 'function'>

func = lambda: 1
print(func())
# 1

func = lambda x: x
print(func(2))
# 2

l = lambda x: (x +
               x -
               x)
print(l(2))
# 2