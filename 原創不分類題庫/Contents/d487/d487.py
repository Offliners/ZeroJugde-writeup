import sys

def fac(num):
    if num == 0 or num == 1:
        print("1 = ", end="")
        return 1
    
    print("%d * " % num, end="")
    return fac(num - 1) * num

for n in sys.stdin:
    n = int(n)

    print("%d! = " % n, end="")
    temp = fac(n)
    print(temp)
