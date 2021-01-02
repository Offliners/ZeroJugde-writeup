import sys

for n in sys.stdin:
    n = int(n)

    ans = 0
    a0 = d = 1
    for i in range(50):
        ans += a0
        a0 += d
        d += n
    
    print(ans)
