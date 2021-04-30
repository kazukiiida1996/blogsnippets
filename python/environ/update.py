import os


os.environ['MYVAR'] = 'hello'
print(os.environ['MYVAR'])
# hello


os.environ.update(MYVAR='world')
print(os.environ['MYVAR'])
# world


os.environ.update(AAA='This is AAA', BBB='This is BBB')
print(os.environ['AAA'])
# This is AAA

print(os.environ['BBB'])
# This is BBB
