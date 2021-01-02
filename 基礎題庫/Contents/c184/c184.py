import sys

def isPerfect(num):
    end = int(num ** 0.5)
    res = end ** 2

    if res == num:
        res = 1 - end
    else:
        res = 1
    
    for i in range(2, end + 1):
        if num % i == 0:
            res += i + num // i
    return res

for n in sys.stdin:
    n = int(n)

    if n == 0:
        break
    
    temp = isPerfect(n)
    if temp == n:
        print("=%d" % n)
    else:
        if isPerfect(temp) == n:
            print(temp)
        else:
            print(0)
