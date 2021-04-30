import os


os.environ['MYVAR'] = 'hello'

print(os.environ['MYVAR'])
# hello


os.environ['MYVAR'] += ' world'

print(os.environ['MYVAR'])
# hello world


try:
    os.environ['MYVAR'] = 1
except TypeError as e:
    print(e)
    # str expected, not int
