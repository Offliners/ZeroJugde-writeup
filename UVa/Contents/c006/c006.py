import sys

for temp in sys.stdin:
    init, a1, a2, a3 = map(int, temp.split())

    if init == 0 and a1 == 0 and a2 == 0 and a3 == 0:
        break
    
    ans = 0
    degree = 360 / 40

    ans += 360 * 2
    ans += ((init - a1 + 40) % 40) * degree
    ans += 360
    ans += ((a2 - a1 + 40) % 40) * degree
    ans += ((a2 - a3 + 40) % 40) * degree
    
    print(int(ans))
