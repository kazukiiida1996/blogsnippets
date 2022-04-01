import uuid

print(uuid.uuid4())


import uuid
import os

for _ in range(4):
    folder_name = str(uuid.uuid4())
    os.mkdir(folder_name)
