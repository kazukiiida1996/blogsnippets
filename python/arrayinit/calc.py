import time


n = 50000000


# アスタリスク
start = time.time()

l = [0] * n

tm = time.time() - start
print('アスタリスク', tm, '秒')


# リスト内包表記
start = time.time()

l = [0 for _ in range(n)]

tm = time.time() - start
print('リスト内包表記', tm, '秒')


# range
start = time.time()

l = list(range(n))

tm = time.time() - start
print('range', tm, '秒')


# append
start = time.time()

l = []
for _ in range(n):
    l.append(0)

tm = time.time() - start
print('append', tm, '秒')
