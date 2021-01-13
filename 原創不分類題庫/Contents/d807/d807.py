import sys

def gcd(a, b):    
    return b if (a % b == 0) else gcd(b, a % b)

for temp in sys.stdin:
    num1, num2 = map(int, temp.split())
    print(gcd(num1, num2))
