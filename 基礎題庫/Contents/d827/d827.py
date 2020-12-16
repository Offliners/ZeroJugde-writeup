import sys

for n in sys.stdin:
    n = int(n)

    print((n // 12) * 50 + n % 12 * 5)
