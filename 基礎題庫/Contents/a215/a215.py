import sys

for temp in sys.stdin:
    n, m = temp.split()
    n = int(n)
    m = int(m)

    i = 0
    total = 0
    while(total <= m):
        total += n + i
        i += 1
    
    if i == 0:
        i += 1
    
    print(i)
