import sys

for n in sys.stdin:
    n = int(n)

    i = 2
    while i ** 2 <= n:
        if n % i == 0:
            print("no")
            break
        i += 1
    else:
        print("yes")
