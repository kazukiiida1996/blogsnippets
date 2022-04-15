toks = input().split()

print(toks)


digs = [int(tok) for tok in input().split()]

print(digs)


digs = list(map(int, input().split()))

print(digs)


N = int(input())
mat = [list(map(int, input().split())) for _ in range(N)]

print(mat)


toks = '1,2,3'.split(',')

print(toks)  # ['1', '2', '3']


d = dict(zip(input().split(), input().split()))

print(d)
