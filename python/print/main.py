print(1, 2, 3)
print(1.1, 2.2, 3.3)


print('The', 'Hello', 'World')


class MyObject:
    pass

print(MyObject())


class MyObject:
    def __str__(self):
        return 'my-object'

print(MyObject())


print(1, 2, 3, sep=':')


print(1, 2, 3, end='\n--------\n')


import sys

print('error!', file=sys.stderr)


with open('file.txt', 'w') as fout:
    print(1, 2, 3, file=fout)
    print('Hello', 'World!', file=fout)


print(1, 2, 3, flush=True)
