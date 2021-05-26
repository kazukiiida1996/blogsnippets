s = '-'.join(['2100', '01', '01'])
print(s)
# 2100-01-01


s = ','.join(('Alice', 'Bob', 'Taro'))
print(s)
# Alice,Bob,Taro


g = (str(i) for i in range(3))
s = '-'.join(g)
print(s)
# 0-1-2


try:
    '-'.join([None])
except TypeError as e:
    print(e)
    # sequence item 0: expected str instance, NoneType found
