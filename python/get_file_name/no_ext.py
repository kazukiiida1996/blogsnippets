import os

path = '/path/to/my/file.txt'
base = os.path.basename(path)
fname = os.path.splitext(base)[0]
print(fname)
# file


path = 'file.txt'
result = os.path.splitext(path)
print(result)
# ('file', '.txt')


path = '/path/to/my/abc.def.ghi'
base = os.path.basename(path)
fname = os.path.splitext(base)[0]
fname = os.path.splitext(fname)[0]
print(fname)
# abc


path = '/path/to/my/abc.def.ghi'
base = os.path.basename(path)
fname = base.split('.')[0]
print(fname)
# abc