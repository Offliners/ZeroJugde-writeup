import sys

for temp in sys.stdin:
    m, n = map(int, temp.split())

    print(abs(m - n))
