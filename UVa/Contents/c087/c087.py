import sys

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

for n in sys.stdin:
    n = int(n)

    if n == 0:
        break
    
    temp = []
    for i in range(n):
        temp.append(int(input()))
    
    count = 0
    for i in range(n):
        for j in range(n):
            if i == j:
                continue
            elif gcd(temp[i], temp[j]) == 1:
                count += 1

    count /= 2
    if count == 0:
        print("No estimate for this data set.")
    else:
        print("%.6f" % (6 * n * (n - 1) / 2 / count) ** 0.5)
