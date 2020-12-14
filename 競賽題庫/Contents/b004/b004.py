import sys
import math

for temp in sys.stdin:
    d, l = map(int, temp.split())

    print("%.3lf" % (math.pi * l * (l ** 2 - d ** 2) ** 0.5 / 4))
