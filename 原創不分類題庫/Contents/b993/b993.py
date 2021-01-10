import sys

for n in sys.stdin:
    data = [int(e) for e in sys.stdin.readline().split()]

    print(max(data))
