import sys

for temp in sys.stdin:
    n, m = map(int, temp.split())

    print(n * (n + 1) * m * (m + 1) // 4)
