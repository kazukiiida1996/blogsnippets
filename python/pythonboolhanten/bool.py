print(not True)  # False


print(not False)  # True


print(not not 1)  # True


l1 = [True, False, True, False]
l2 = list(map(lambda x: not x, l1))
print(l2)
# [False, True, False, True]


l1 = [True, False, True, False]
for i, x in enumerate(l1):
    l1[i] = not x

print(l1)
# [False, True, False, True]


l1 = [True, False, True, False]
l2 = [not x for x in l1]
print(l2)
# [False, True, False, True]


d1 = {'a': True, 'b': False}
d2 = { k: not v for k, v in d1.items() }
print(d2)
# {'a': False, 'b': True}


d1 = {'a': True, 'b': False}

for k, v in d1.items():
    d1[k] = not v

print(d1)
# {'a': False, 'b': True}


l = [True, True, True]
print(all(l))  # True
print(not all(l))  # False

l = [True, False, True]
print(all(l))  # False
print(not all(l))  # True



l = [False, True, False]
print(any(l))  # True
print(not any(l))  # False

l = [False, False, False]
print(any(l))  # False
print(not any(l))  # True

