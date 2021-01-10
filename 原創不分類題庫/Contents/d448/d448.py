import sys

for temp in sys.stdin:
    t1, t2, t3, x1, x3 = map(float, temp.split())

    x2 = (t2 - t3) / (t1 - t3) * (x1 - x3) + x3
    print("%.6lf" % x2)
