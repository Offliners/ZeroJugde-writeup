import sys

for n in sys.stdin:
    n = int(n)
    print(int(n > 0) - int(n < 0))
