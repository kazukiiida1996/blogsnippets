print(type(None))
# <class 'NoneType'>


a = None
b = None
print(id(a))
# 9621664
print(id(b))
# 9621664


var = None
print(var)
# None

a = None
b = a
print(a, b)
# None None


def func(a=None):
    print(a)
    # None

func()


def func():
    pass

result = func()
print(result)
# None


def func():
    return

result = func()
print(result)
# None


if None == None:
    print('== none')
    # == none

a = None
if a == None:
    print('== none')
    # == none

if None is None:
    print('is none')
    # is none

a = None
if a is None:
    print('is none')
    # is none


class Animal:
    def __eq__(self, other):
        return True

a = Animal()
print(a == None)
# True


lis = [None, None]
print(len(lis))
# 2
