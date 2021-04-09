import os
from pathlib import Path


path = Path('/path/to/file.txt')
fname = os.path.basename(path)
print(fname)
# file.txt