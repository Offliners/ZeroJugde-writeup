import sys

def nextNum(num):
    result = 0

    while(num != 0):
        rem = num % 10
        num //= 10
        result += rem * rem

    return result

def isHappy(n):    
    num1 = n
    num2 = n
    
    while True:
        num1 = nextNum(num1)
        num2 = nextNum(nextNum(num2))
        
        if num1 == num2:
            break
            
    return num1 == 1

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        num = int(input())
        if isHappy(num):
            print("Case #%d: %d is a Happy number." % (i + 1, num))
        else:
            print("Case #%d: %d is an Unhappy number." % (i + 1, num))
