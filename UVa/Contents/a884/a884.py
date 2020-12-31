import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        a, b = map(int, input().split())
        print(a - b)
