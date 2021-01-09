import sys

def rev(x):
    x = str(x)
    x = x[::-1]
    return int(x)

for n in sys.stdin:
    
    temp = [int(e) for e in input().split()]
    data = []
    for num in temp:
        num = rev(num)
        data.append(num)
    
    data = sorted(data)
    print(data[-1])
