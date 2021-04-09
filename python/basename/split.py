import os


path = '/path/to/file.txt'
toks = os.path.split(path)
print(toks)
# ('/path/to', 'file.txt')

fname = toks[-1]
print(fname)
# file.txt 


fname = os.path.split('/path/to/file.txt')[-1]
print(fname)
# file.txt


path = '/path/to/dir'
dirname = os.path.split(path)[-1]
print(dirname)
# dir


path = '/path/to/dir'
os.path.dirname(path)
print(dirname)
# dir


path = '/path/to/file.txt'
toks = path.split('/')
print(toks)
# ['', 'path', 'to', 'file.txt']

fname = toks[-1]
print(fname)
# file.txt


print(os.path.sep)
# /

path = '/path/to/file.txt'
toks = path.split(os.path.sep)
print(toks)
# ['', 'path', 'to', 'file.txt']

fname = toks[-1]
print(fname)
# file.txt
