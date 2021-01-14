import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        a, b, c, d = map(float, input().split())

        if b != 0 or d != 0:
            print("No")
        else:
            if a > c:
                print(">")
            elif a == c:
                print("=")
            else:
                print("<")
