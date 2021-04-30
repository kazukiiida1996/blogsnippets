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