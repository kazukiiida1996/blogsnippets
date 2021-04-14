import os

try:
    os.rmdir('nothing/path')
except FileNotFoundError as e:
    print(e)
    # [Errno 2] No such file or directory: 'nothing/path'

try:
    os.rmdir(None)
except TypeError as e:
    print(e)
    # rmdir: path should be string, bytes or os.PathLike, not NoneType

try:
    os.rmdir('samples/')
except OSError as e:
    print(e)
    # [Errno 39] Directory not empty: 'samples/'