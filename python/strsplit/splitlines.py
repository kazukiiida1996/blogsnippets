s = 'abc\rdef\nghi\r\njkl'
toks = s.splitlines()
print(toks)
# ['abc', 'def', 'ghi', 'jkl']


s = 'abc\rdef\nghi\r\njkl'
toks = s.splitlines(True)
print(toks)
# ['abc\r', 'def\n', 'ghi\r\n', 'jkl']
