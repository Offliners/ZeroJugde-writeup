import sys

for n in sys.stdin:
    for i in range(int(n) + 1):
        print("2^" + str(i) + " = " + str(2 ** i))
