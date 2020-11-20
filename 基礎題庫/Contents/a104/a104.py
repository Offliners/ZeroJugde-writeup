import sys

for num in sys.stdin:
    print(" ".join(str(e) for e in sorted([int(e) for e in input().split()])))
