import sys

for temp in sys.stdin:
    n, m = map(int, temp.split())

    maxValue = 0
    for i in range(n):
        cp, iv = map(int, input().split())

        if iv > 39:
            temp = cp + m // 1000 * 100
        elif iv > 29:
            temp = cp + m // 1000 * 50
        else:
            temp = cp + m // 1000 * 10
        
        if temp > maxValue:
            maxValue = temp
            maxID = i + 1
        
    print("%d %d" % (maxID, maxValue))

