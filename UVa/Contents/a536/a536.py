import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        e, f, c = map(int, input().split())

        total = (e + f) // c
        e = (e + f) % c + total

        while e >= c:
            total += e // c
            e = e // c + e % c
        
        print(total)
