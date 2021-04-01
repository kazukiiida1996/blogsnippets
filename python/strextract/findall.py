import re

s = 'abc123def'
result = re.findall(r'a.+123', s)
print(result[0])
# abc123


s = 'abc123def'
result = re.findall(r'\d+', s)
print(result[0])
# abc123
