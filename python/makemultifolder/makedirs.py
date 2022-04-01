import os

path = 'parent/child/folder'

os.makedirs(path)


path = 'sudeni/sonzai/suruyo'
os.makedirs(path)

try:
    os.makedirs(path)
except FileExistsError as e:
    print(e)
    # [Errno 17] File exists: 'sudeni/sonzai/suruyo'


os.makedirs(path, exist_ok=True)
