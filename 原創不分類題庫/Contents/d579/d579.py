import sys

for n in sys.stdin:
    n = float(n)

    print("|%.04lf|=%.04lf" % (n, abs(n)))
