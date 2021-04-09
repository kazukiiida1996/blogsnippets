import os


path = '/path/to/file.txt'
fname = os.path.basename(path)
print(fname)
# file.txt


path = b'/path/to/file.txt'
fname = os.path.basename(path)
print(fname)
# b'file.txt'


try:
    os.path.basename(None)
except TypeError as e:
    print(e)
    # expected str, bytes or os.PathLike object, not NoneType