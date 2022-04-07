s = b'abc123'.decode('utf-8')

print(type(s))
print(s)


b = 'abc123'.encode('utf-8')

print(type(b))
print(b)


s = str(b'abc123')

print(type(s))
print(s)


try:
    b'\x80abc'.decode('utf-8')
except UnicodeDecodeError as e:
    print(e)
    # 'utf-8' codec can't decode byte 0x80 in position 0: invalid start byte


s = b'\x80abc'.decode('utf-8', 'replace')
print(s)

s = b'\x80abc'.decode('utf-8', 'ignore')
print(s)

s = b'\x80abc'.decode('utf-8', 'backslashreplace')
print(s)
