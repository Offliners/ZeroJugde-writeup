import sys

for n in sys.stdin:
    n = int(n)
    print(("Odd" , "Even")[n & 1 == 0])
