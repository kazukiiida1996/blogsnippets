s = 'aaabbcaa'

print(type(s.count))
# <class 'builtin_function_or_method'>

n = s.count('a')

print(type(n))
# <class 'int'>

print(n)
# 5


n = s.count('a', 3)
print(n)
# 2

n = s.count('a', 3, 7)
print(n)
# 1
