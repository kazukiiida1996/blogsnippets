s = 'Hello, '
s += 'World!'
print(s)
# Hello, World!


s = 'Hello, '
print(id(s))
# 140656086881136

s += 'World!'
print(id(s))
# 140656085968880
