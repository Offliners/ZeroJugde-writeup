import sys

for n in sys.stdin:
    n = int(n)

    f = n * (n + 1) // 2
    g = n * (n + 1) * (n + 2) // 6

    print(f, g)
