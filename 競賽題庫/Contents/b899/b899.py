import sys

for temp in sys.stdin:
    ptr = []

    ptr.append([int(e) for e in temp.split()])
    for i in range(2):
        ptr.append([int(e) for e in input().split()])
    
    maxSide = 0
    for i in range(3):
        side = (ptr[i % 3][0] - ptr[(i + 1) % 3][0]) ** 2 + (ptr[i % 3][1] - ptr[(i + 1) % 3][1]) ** 2

        if side > maxSide:
            maxSide = side
            maxPtr = i
    
    for j in range(2):
        print(ptr[maxPtr % 3][j] + ptr[(maxPtr + 1) % 3][j] - ptr[(maxPtr + 2) % 3][j], "", end="")
    print()
