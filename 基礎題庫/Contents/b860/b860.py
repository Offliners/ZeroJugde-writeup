import sys

for temp in sys.stdin:
    candy, w = map(int, temp.split())

    k = count = 0
    while w > 0:
        t = candy // 12

        if w < t:
            t = w
        
        if t > 0:
            candy -= 11 * t
            w -= t
            k += t
            count += t
        
        candy += k
        k = 0

        if candy < 12:
            w -= 12 - candy
            candy = 12
    
    print(count)
