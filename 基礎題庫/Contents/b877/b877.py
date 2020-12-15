import sys

for temp in sys.stdin:
    a, b = map(int, temp.split())

    print((b + 100 - a) % 100)
