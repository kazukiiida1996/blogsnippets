import shutil


shutil.rmtree('sample/dst/src')
shutil.copytree('sample/src/', 'sample/dst/src')
shutil.copytree('sample/src/', 'sample/dst/src', dirs_exist_ok=True)
