import sys

rem = 0
total = 0
for temp in sys.stdin:
    count = temp.count('"')

    for i in range(count):
        if (i  + total) % 2 == 0:
            temp = temp.replace("\"", "``", 1)
        else:
            temp = temp.replace("\"", "''", 1)

    total += count

    print(temp, end="")
