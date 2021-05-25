s = 'abc,def,ghi'
toks = s.split(',')
print(toks)
# ['abc', 'def', 'ghi']


s = 'abc,def,ghi'
toks = s.split(',def,')
print(toks)
# ['abc', 'ghi']


s = ''
toks = s.split(',')
print(toks)
# ['']


s = 'abc,def,ghi'
last = s.split(',')[-1]
print(last)
# ghi


s = 'abc\ndef\tghi jkl'
toks = s.split()
print(toks)
# ['abc', 'def', 'ghi', 'jkl']


s = 'abc,def,ghi'
toks = s.split(',', 1)
print(toks)
# ['abc', 'def,ghi']
