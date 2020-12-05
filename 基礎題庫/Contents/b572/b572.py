import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        h1, m1, h2, m2, m3 = map(int, input().split())

        if h1 * 60 + m1 + m3 <= h2 * 60 + m2:
            print("Yes")
        else:
            print("No")
