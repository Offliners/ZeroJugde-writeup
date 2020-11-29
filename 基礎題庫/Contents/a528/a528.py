import sys

for n in sys.stdin:
    n = int(n)

    data = []
    for i in range(n):
        data.append(int(input()))
    
    data = sorted(data)

    for j in data:
        print(j)
