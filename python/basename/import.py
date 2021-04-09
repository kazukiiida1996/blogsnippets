import os


fname = os.path.basename('/path/to/file.txt')
print(fname)
# file.txt


from os.path import basename


fname = basename('/path/to/file.txt')
print(fname)
# file.txt