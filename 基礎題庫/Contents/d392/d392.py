import sys

for temp in sys.stdin:
    temp = [int(e) for e in temp.split()]

    print(sum(temp))
