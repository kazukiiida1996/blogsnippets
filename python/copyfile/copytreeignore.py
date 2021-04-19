import shutil


def ignore(dir_, lis):
    print(dir_, lis)
    return 'file1.txt'

shutil.copytree('sample/src/', 'sample/dst/src', ignore=ignore)
