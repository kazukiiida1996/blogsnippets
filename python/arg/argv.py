import sys


print(type(sys.argv))
# <class 'list'>


print(sys.argv)
# ['argv.py']


print(sys.argv)
# ['argv.py', 'arg1', 'arg2']


print(sys.argv)
# ['argv.py', '--opt1', 'arg2']


for arg in sys.argv[1:]:
    print(arg)
    # arg1
    # arg2