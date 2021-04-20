typ = type(1)
print(typ)
# <class 'int'>

typ = type('Good')
print(typ)
# <class 'str'>


if type(1) is int:
    print('int型です')
    # int型です

if isinstance('Good', str):
    print('str型です')
    # str型です
