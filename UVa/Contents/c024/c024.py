import sys

for n in sys.stdin:
    n = int(n)

    if n < 0:
        break

    print(1 + n * (n + 1) // 2)
