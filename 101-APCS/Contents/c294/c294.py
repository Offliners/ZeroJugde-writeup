import sys

for temp in sys.stdin:
    side = map(int, temp.split())

    side = sorted(side)
    print(*side)

    if side[0] + side[1] <= side[2]:
        print("No")
    elif side[0] ** 2 + side[1] ** 2 == side[2] ** 2:
        print("Right")
    elif side[0] ** 2 + side[1] ** 2 < side[2] ** 2:
        print("Obtuse")
    else:
        print("Acute")
