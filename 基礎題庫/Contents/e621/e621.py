import sys

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        a, b, c = map(int, input().split())

        space = 0
        if c == 0:
            print("No free parking spaces.")
        else:
            a += 1
            while a % c != 0 and a < b:
                print(str(a) + " ", end="")
                space = 1
                a += 1
            
            gap = 1
            while a + gap < b:
                print(str(a + gap) + " ", end="")
                space = 1
                gap += 1

                if gap == c:
                    gap = 1
                    a += c
            
            if space == 0:
                print("No free parking spaces.", end="")
            print()
