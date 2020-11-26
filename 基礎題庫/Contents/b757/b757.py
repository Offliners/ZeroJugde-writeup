import sys

for r in sys.stdin:
    R = float(r) * 9 / 5 + 32
    print("%g" % R)
