import sys

for n in sys.stdin:
    n = int(n)

    point = []
    for i in range(n):
        point.append([int(e) for e in input().split()])

    point = sorted(point, key=lambda x : (x[0], x[1]))
    
    for i in point:
        print(i[0], i[1])
