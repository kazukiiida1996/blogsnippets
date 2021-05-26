s = 'Hello, ' + 'World!'
print(s)
# Hello, World!


s1 = 'Hello, '
s2 = 'World!'
s3 = s1 + s2
print(s3)
# Hello, World!


try:
    s = 'Hello, ' + None
except TypeError as e:
    print(e)
    # can only concatenate str (not "NoneType") to str


s = 'Hello, ' + str(None)
print(s)
# Hello, None

s = 'Hello, ' + str(True)
print(s)
# Hello, True

s = 'Hello, ' + str(False)
print(s)
# Hello, False
