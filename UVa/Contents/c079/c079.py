import sys

for temp in sys.stdin:
    n, k = map(int, temp.split())

    total = n + n // k
    n = n // k + n % k

    while n >= k:
        n -= k
        n += 1
        total += 1
    
    print(total)
