import re


s = 'One Two Three'
elems = re.findall(r'T[a-z]+', s)
print(elems)
# ['Two', 'Three']


s = 'one TWO Three'
elems = re.findall(r't[a-z]+', s, re.IGNORECASE)
print(elems)
# ['TWO', 'Three']
