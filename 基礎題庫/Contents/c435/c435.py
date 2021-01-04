import sys

for n in sys.stdin:
    n = int(n)

    maxDiff = 0
    data = [int(e) for e in sys.stdin.readline().split()]

    maxValue = data[0]
    for i in range(1, n):
        if data[i] > maxValue:
            maxValue = data[i]
        else:
            temp = maxValue - data[i]

            if temp > maxDiff:
                maxDiff = temp
    
    print(maxDiff)
