import re


s = 'One Two Three'
m = re.search(r'T[a-z]+', s)

print(m)
# <re.Match object; span=(4, 7), match='Two'>

print(m.group())
# Two


s = 'ONE TWO THREE'
m = re.search(r'two', s, re.IGNORECASE)

print(m)
# <re.Match object; span=(4, 7), match='TWO'>

print(m.group())
# TWO


