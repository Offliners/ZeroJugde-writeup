import sys
import math

m = 0.261497212847642

for prime in sys.stdin:
    prime = int(prime)
    ans = math.log((math.log10(prime)) / math.log10(math.e)) + m
    print("%.3lf" % ans)
