import re


s = 'viss viss viss'
result = re.sub(r'viss', 'VISS', s)
print(result)
# VISS VISS VISS


s = 'viss viss viss'
result = re.sub(r'viss', 'VISS', s, 2)
print(result)
# VISS VISS viss


s = 'viss VISS Viss'
result = re.sub(r'viss', 'WAO', s, 3, re.IGNORECASE)
print(result)
# WAO WAO WAO


s = 'The green cat'
result = re.sub(r'c[a-z]+', 'VISS', s)
print(result)
# The green VISS


s = 'Since 2021'
result = re.sub(r'\d+', 'VISS', s)
print(result)
# Since VISS


s = 'One Two Three Four'
result = re.sub(r'\s', '-', s)
print(result)
# One-Two-Three-Four
