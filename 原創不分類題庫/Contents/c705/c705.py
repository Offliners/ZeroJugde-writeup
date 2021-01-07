import sys

for n in sys.stdin:
    n = int(n)

    temp = []
    for i in range(4):
        temp.append(n % 256)
        n >>= 8
    
    print(temp[3], end="")
    for i in range(3):
        print(".%d" % (temp[2 - i]), end="")
    print()
