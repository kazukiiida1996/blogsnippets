import re


s = 'The cute cat'

result = s.replace('cat', 'dog')
print(result)
# The cute dog

result = re.sub(r'cat', 'bird', s)
print(result)
# The cute bird
