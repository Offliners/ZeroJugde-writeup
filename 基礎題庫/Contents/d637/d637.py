import sys

for n in sys.stdin:
    n = int(n)

    food = []
    for i in range(n):
        food.append([int(e) for e in input().split()])
    
    maxSat = [0] * 101
    for i in range(n):
        j = 100
        while j >= food[i][0]:
            maxSat[j] = max(maxSat[j], maxSat[j - food[i][0]] + food[i][1])
            j -= 1
    
    print(maxSat[100])
