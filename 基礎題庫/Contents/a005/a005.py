import sys

num = int(sys.stdin.readline())
for i in range(num):
    series = sys.stdin.readline()
    a,b,c,d = map(int,series.split())
    if (d-c) == (c-b) == (b-a):
        print("%d %d %d %d %d" % (a,b,c,d,d+(d-c)))
    elif (d/c) == (c/b) == (b/a):
        print("%d %d %d %d %d" % (a,b,c,d,d*(d/c)))
