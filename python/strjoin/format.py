s1 = 'Hello'
s2 = '{}, World!'.format(s1)
print(s2)
# Hello, World!


s1 = 'Hello'
s2 = 'World'
s3 = '{}, {}!'.format(s1, s2)
print(s3)
# Hello, World!


s1 = 'Hello'
s2 = 'World'
s3 = '{one}, {two}!'.format(one=s1, two=s2)
print(s3)
# Hello, World!


s1 = 'Hello'
s2 = 'World'
s3 = '{one}, {two}!'.format(two=s2, one=s1)
print(s3)
# Hello, World!
