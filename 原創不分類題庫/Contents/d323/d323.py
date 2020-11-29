import sys

for temp in sys.stdin:
    data = [int(e) for e in input().split()]
    data = sorted(data)
    print(*data)
