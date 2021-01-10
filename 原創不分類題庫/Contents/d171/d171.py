import sys
import math

for temp in sys.stdin:
    n, m = map(int , temp.split())

    print(int(m * math.log10(n)) + 1)
