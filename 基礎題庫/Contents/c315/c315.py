import sys

for n in sys.stdin:
    n = int(n)

    x = y = 0
    for i in range(n):
        ctrl, step = map(int, input().split())

        if ctrl == 0:
            y += step
        elif ctrl == 1:
            x += step
        elif ctrl == 2:
            y -= step
        elif ctrl == 3:
            x -= step
    
    print(x, y)
