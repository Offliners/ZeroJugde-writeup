import sys

for num in sys.stdin:
    num = int(num)

    if num == 0:
        break

    for i in range(num):
        if i % 7 == 0:
            continue

        print(i, " ", sep="", end="")
    print()
