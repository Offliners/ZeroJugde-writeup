import sys

for temp in sys.stdin:
    a, an, d = map(int, temp.split())

    if a == an:
        print(a)
    else:
        print(str(a) + " ", end="")

        while a != an:
            a += d
            print(str(a) + " ", end="")
        print()
