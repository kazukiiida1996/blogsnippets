import shutil


shutil.rmtree('sample/dst/src')
shutil.copytree('sample/src/', 'sample/dst/src', copy_function=shutil.copyfile)
shutil.rmtree('sample/dst/src')
shutil.copytree('sample/src/', 'sample/dst/src', copy_function=shutil.copy)
