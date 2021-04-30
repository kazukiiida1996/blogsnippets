import os


os.environ['MYVAR'] = 'hello'
print(os.environ['MYVAR'])
# hello

del os.environ['MYVAR']
print(os.environ.get('MYVAR', 'nothing'))
# nothing


try:
    del os.environ['NOTHING']
except KeyError as e:
    print(e)
    # 'NOTHING'


os.environ['MYVAR'] = 'hello'

myvar = os.environ.pop('MYVAR')
print(myvar)
# hello

print('MYVAR' in os.environ.keys())
# False


print(len(os.environ.keys()))
# 35

os.environ.clear()

print(len(os.environ.keys()))
# 0