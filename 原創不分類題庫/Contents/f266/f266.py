import sys

for temp in sys.stdin:
    temp = temp.strip().split()

    for i in range(5):
        print(*temp[i:])
