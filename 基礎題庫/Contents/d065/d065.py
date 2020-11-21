import sys

for temp in sys.stdin:
    a, b, c = map(int, temp.split())

    print(max(a, b, c))
