import sys

for temp in sys.stdin:
    n, m = map(int, temp.split())

    if n != m:
        print(m + 1)
    else:
        print(m)
