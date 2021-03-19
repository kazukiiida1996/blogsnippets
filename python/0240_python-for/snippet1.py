for i in range(3):
    print(i)
else:
    print('done')


lis = [1, 2, 3]
for el in lis:
    print(el)

tup = (1, 2, 3)
for el in tup:
    print(el)


lis = [1, 2, 3]
for el in lis[::-1]:
    print(el)

tup = (1, 2, 3)
for el in tup[::-1]:
    print(el)


d = {'a': 1, 'b': 2}
for key in d:
    print(key)

d = {'a': 1, 'b': 2}
for key in d.keys():
    print(key)

d = {'a': 1, 'b': 2}
for val in d.values():
    print(val)

d = {'a': 1, 'b': 2}
for key, val in d.items():
    print(key, val)


for i in range(4):
    print(i)


lis = [10, 20, 30]
for i, el in enumerate(lis):
    print(i, el)


class LoopMe:
    def __iter__(self):
        return iter(range(3))

for el in LoopMe():
    print(el)
