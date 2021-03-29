import os

path = '/path/to/my/file.txt'
base = os.path.basename(path)
print(base)
# file.txt


try:
    os.path.basename(None)
except TypeError as e:
    print(e)
    # expected str, bytes or os.PathLike object, not NoneType


path = b'/path/to/my/file.txt'
base = os.path.basename(path)
print(base)
# b'file.txt'


from pathlib import Path

path = Path('/path/to/my/file.txt')
base = os.path.basename(path)
print(base)
# file.txt