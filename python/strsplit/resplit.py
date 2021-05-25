import re


s = 'abc def\tghi'
toks = re.split(r'\s', s)
print(toks)
# ['abc', 'def', 'ghi']


s = 'abc123def456ghi'
toks = re.split(r'\d+', s)
print(toks)
# ['abc', 'def', 'ghi']


s = 'abc,def\tghi:jkl'
toks = re.split(r'[,\t:]', s)
print(toks)
# ['abc', 'def', 'ghi', 'jkl']
