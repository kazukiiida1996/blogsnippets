import os

try:
    os.removedirs('samples/')
except OSError as e:
    print(e)
    # [Errno 39] Directory not empty: 'samples/'
    