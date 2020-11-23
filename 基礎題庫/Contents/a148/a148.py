import sys

for temp in sys.stdin:
    total = 0
    data = [int(e) for e in temp.split()]
    avg = sum(data[1:]) / data[0]

    if avg > 59:
        print("no")
    else:
        print("yes")
