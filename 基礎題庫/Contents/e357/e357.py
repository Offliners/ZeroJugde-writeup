import sys

def F(n):
    if n == 1:
        return 1
    elif n % 2 == 0:
        return F(n // 2)
    else:
        return F(n - 1) + F(n + 1)

for x in sys.stdin:
    x = int(x)

    print(F(x))
