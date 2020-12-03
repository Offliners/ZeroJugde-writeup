import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        s, d = map(int, input().split())

        t1 = (s + d) // 2
        t2 = (s - d) // 2

        if t1 >= 0 and t2 >= 0 and (s + d) % 2 == 0:
            print(t1, t2)
        else:
            print("impossible")
