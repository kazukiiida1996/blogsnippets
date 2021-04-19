import shutil


try:
    shutil.copytree('sample/src/', 'sample/src')
except FileExistsError as e:
    print(e)
    # [Errno 17] File exists: 'sample/src'
