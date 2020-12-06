import sys

for temp in sys.stdin:
    h, w = map(int, temp.split())

    print(2 * (w + h))
