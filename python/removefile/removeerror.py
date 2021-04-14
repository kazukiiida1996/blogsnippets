import os

try:
    os.remove('nothing/path')
except FileNotFoundError as e:
    print(e)
    # [Errno 2] No such file or directory: 'nothing/path'

try:
    os.remove(None)
except TypeError as e:
    print(e)
    # remove: path should be string, bytes or os.PathLike, not NoneType
