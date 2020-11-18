import sys

for num in sys.stdin:
    m, n = map(int, num.split())

    mat = []
    for i in range(m):
        mat.append([int(e) for e in input().split()])

    for i in range(n):
        for j in range(m):
            print(mat[j][i], " ", sep = "", end="")
        print()
