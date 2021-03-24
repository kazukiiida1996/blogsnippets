d = {'a': 1, 'a': 2, 'b': 2}

try:
    d.count('a')
except AttributeError as e:
    print(e)
    # 'dict' object has no attribute 'count'

try:
    d.items().count()
except AttributeError as e:
    print(e)
    # 'dict_items' object has no attribute 'count'

try:
    d.keys().count()
except AttributeError as e:
    print(e)
    # 'dict_keys' object has no attribute 'count'

try:
    d.values().count()
except AttributeError as e:
    print(e)
    # 'dict_values' object has no attribute 'count'

n = list(d.keys()).count('a')
print(n)
# 1

n = list(d.values()).count(2)
print(n)
# 2
