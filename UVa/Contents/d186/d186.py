import sys

for temp in sys.stdin:
    a, b = map(int, temp.split())

    if a == 0 and b == 0:
        break

    n1 = int(a ** 0.5)
    n2 = int(b ** 0.5)

    if n1 ** 2 != a:
        n1 += 1
    
    print(n2 - n1 + 1)
