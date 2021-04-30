import os


myvar = os.environ['MYVAR']
print(myvar)
# hello


try:
    os.environ['NOTHING']
except KeyError as e:
    print(e)
    # 'NOTHING'


myvar = os.environ.get('MYVAR')
print(myvar)
# hello


myvar = os.environ.get('NOTHING', 'world')
print(myvar)
# world
