import sys

for temp in sys.stdin:
    volt, ohm = map(float, temp.split())

    print("%.4f" % (volt * 1000 / ohm))
