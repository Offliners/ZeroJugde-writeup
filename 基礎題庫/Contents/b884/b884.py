import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        x, y = map(int, input().split())

        yee = 100 - x - y

        if yee > 0 and yee <= 30:
            print("sad!")
        elif yee > 30 and yee <= 60:
            print("hmm~~")
        elif yee > 60 and yee < 100:
            print("Happyyummy")
        else:
            print("evil!!")
