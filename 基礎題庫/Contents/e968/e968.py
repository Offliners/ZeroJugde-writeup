import sys

for temp in sys.stdin:
    temp = int(temp)
    num = [int(e) for e in input().split()]
    stu = [e for e in range(1, temp + 1) if e not in num]
    stu = sorted(stu, reverse=True)
    for i in stu:
        print("No. " + str(i))
