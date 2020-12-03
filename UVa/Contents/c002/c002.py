import sys

for n in sys.stdin:
    n = int(n)

    if n == 0:
        break

    f = int(n <= 100) * 91 + int(n > 100) * (n - 10)
    print("f91(%d) = %d"  % (n, f))
