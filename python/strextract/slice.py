s = 'abc123def'

result = s[3:6]
print(result)
# 123


result = s[3:]
print(result)
# 123def


result = s[:3]
print(result)
# abc


result = s[::3]
print(result)
# a1d


result = s[::]
print(result)
# abc123def
