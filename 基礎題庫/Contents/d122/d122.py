import sys

for n in sys.stdin:
    n = int(n)

    count5 = 0
    i = 5
    while i <= n:
        count5 += int(n / i)
        i *= 5
    
    print(count5)
