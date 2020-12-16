import sys
import math

for n in sys.stdin:
    n = int(n)

    print(int(math.log(n, 2) + 1))
