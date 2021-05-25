s = 'abc,def,ghi'
toks = s.rsplit(',')
print(toks)
# ['abc', 'def', 'ghi']


s = 'abc,def,ghi'
toks = s.rsplit(',', 1)
print(toks)
# ['abc,def', 'ghi']
