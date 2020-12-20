import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        temp = int(input())

        if temp % 3 == 1:
            print("NO")
        else:
            print("YES")
