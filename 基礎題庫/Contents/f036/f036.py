import sys

for n in sys.stdin:
    n = int(n)

    power = []
    for i in range(n):
        temp = [int(e) for e in input().split()]

        power.append(min(temp[1:]))
    
    print(max(power))
