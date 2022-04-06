lis = [1, 2, 3]
lis.append(4)

print(lis)  # [1, 2, 3, 4]


lis = []
lis.append(1)
lis.append(2.34)
lis.append('Hey')
lis.append([3, 2, 1])
lis.append({'a': 1, 'b': 2})

print(lis)
# [1, 2.34, 'Hey', [3, 2, 1], {'a': 1, 'b': 2}]


import time

N = 10000000

# append
start = time.time()
lis = []

for i in range(N):
    lis.append(i)

calc_time = time.time() - start
print('append', calc_time)

# リスト内包表記
start = time.time()
lis = [i for i in range(N)]
calc_time = time.time() - start
print('リスト内包表記', calc_time)

# range
start = time.time()
lis = list(range(N))
calc_time = time.time() - start
print('range', calc_time)

