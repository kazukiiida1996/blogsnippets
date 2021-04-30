import os


print(type(os.environ))
# <class 'os._Environ'>

print(isinstance(os._Environ, dict))
# False