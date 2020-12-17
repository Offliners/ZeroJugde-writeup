import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        temp = input().split('X')
        temp = [len(e) * (len(e) + 1) // 2 for e in temp]
        print(sum(temp))
