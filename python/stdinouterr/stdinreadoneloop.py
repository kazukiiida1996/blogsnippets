import sys


while True:
    c = sys.stdin.read(1)
    if not len(c):
        break
    print(c)
