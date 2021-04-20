typ = type(1)
print(typ)
# <class 'int'>

typ = type('Good')
print(typ)
# <class 'str'>


if type(1) is int:
    print('is int!')
    # is int!

if isinstance('Good', str):
    print('is str!')
    # is str!
