import os


os.environ['MYVAR'] = 'hello'

myvar = os.environ['MYVAR']
print(myvar)
# hello
