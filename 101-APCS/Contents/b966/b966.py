import sys

for n in sys.stdin:
    n = int(n)

    point = []
    for i in range(n):
        point.append([int(e) for e in input().split()])
    
    point = sorted(point, key=lambda x : (x[0], x[1]))

    count = 0
    j = 0
    while j < n:
        start, end = point[j][0], point[j][1]

        while j + 1 < n and point[j + 1][0] < end:
            if point[j + 1][1] < end:
                j += 1
            else:
                end = point[j + 1][1]
                j += 1
        
        count += end - start
        j += 1
    
    print(count)
