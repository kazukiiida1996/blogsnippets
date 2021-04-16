try:
    open('file.txt', 'x')
except FileExistsError as e:
    print(e)
    # [Errno 17] File exists: 'file.txt'
