import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        for j in range(i + 1):
            print("*", end="")
        print()
