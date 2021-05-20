from animals import cat

print(cat)
# <module 'animals.cat' from '/path/to/animals/cat.py'>


from animals.cat import nyan, gorogoro

print(nyan)
# <function nyan at 0x1234>

print(gorogoro)
# <function gorogoro at 0x1234>


from animals.cat import (
    nyan,
    gorogoro,
)