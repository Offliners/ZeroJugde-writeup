import sys

for temp in sys.stdin:
    n = sum(map(int, temp.split()))

    print(2 * n)
