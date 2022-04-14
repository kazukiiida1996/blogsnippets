import time


N = 50000000


# append
start = time.time()
lis = []

for i in range(N):
    lis.append(i)

done_time = time.time() - start
print('append', done_time)


# リスト内包表記を使って数列を生成
start = time.time()
lis = [i for i in range(N)]
done_time = time.time() - start
print('リスト内包表記', done_time)


# rangeを使って数列を生成
start = time.time()
lis = list(range(N))
done_time = time.time() - start
print('range', done_time)
