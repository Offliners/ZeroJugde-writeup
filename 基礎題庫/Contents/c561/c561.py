import sys

def rev(x):
    x = str(x)
    x = x[::-1]
    return int(x)

for n in sys.stdin:
    temp = [int(e) for e in input().split()]
    
    maxValue = 0
    for num in temp:
        num = rev(num)
        if num > maxValue:
            maxValue = num
    
    print(maxValue)
