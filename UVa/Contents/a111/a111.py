import sys

for n in sys.stdin:
    n = int(n)

    if n == 0:
        break

    print(n * (n + 1) * (2 * n + 1) // 6)
