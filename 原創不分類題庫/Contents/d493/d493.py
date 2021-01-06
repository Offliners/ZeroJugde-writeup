import sys

for temp in sys.stdin:
    a, n = map(int, temp.split())

    print("%d" % (a ** n))
