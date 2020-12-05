import sys

for n in sys.stdin:
    n = int(n)

    print(1 + n * (n - 1) // 2)
