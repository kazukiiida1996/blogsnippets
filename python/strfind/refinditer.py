import re


s = 'One Two Three'
it = re.finditer(r'T[a-z]+', s)
print(it)
# <callable_iterator object at 0x7f33d41fd790>

print(list(it))
# [<re.Match object; span=(4, 7), match='Two'>, <re.Match object; span=(8, 13), match='Three'>]

