import animals

print(animals)
# <module 'animals' from '/path/to/animals/__init__.py'>


try:
    print(animals.cat)
except AttributeError as e:
    print(e)
    # module 'animals' has no attribute 'cat'


import animals.cat

print(animals.cat)
# <module 'cat' from '/path/to/animals/cat.py'>


import mod, animals


import animals.cat

print(animals.cat.nyan)
# <function nyan at 0x1234>
