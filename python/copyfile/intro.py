import shutil

shutil.copyfile('sample/src/file1.txt', 'sample/dst/file2.txt')
shutil.copy('sample/src/file1.txt', 'sample/dst/file3.txt')
shutil.copy2('sample/src/file1.txt', 'sample/dst/file4.txt')
shutil.copytree('sample/src/', 'sample/dst/src')
# sample/dst/
# ├── file2.txt
# ├── file3.txt
# ├── file4.txt
# └── src
#     └── file1.txt
