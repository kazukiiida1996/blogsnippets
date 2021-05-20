import animals as anims

print(anims)
# <module 'animals' from '/path/to/animals/__init__.py'> 


from animals import cat as c
from animals import (
    cat as c,
    dog as d,
)