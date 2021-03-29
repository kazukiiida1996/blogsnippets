import os


path = '/path/to/my/file.txt'
dirname = os.path.dirname(path)
print(dirname)
# /path/to/my


path = '/path/to/my/file.txt'
dirname = os.path.dirname(path)
dirname = os.path.split(dirname)[-1]
print(dirname)
# my
