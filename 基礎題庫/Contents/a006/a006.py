import sys
import math

for num in sys.stdin:
    a,b,c = map(int,num.split())
    t = b**2 - 4*a*c
    if t < 0:
        print("No real root")
    elif t == 0:
        print("Two same roots x=" + str(int(-b/(2*a))))
    else:
        x1 = (-b + math.sqrt(t))/(2*a)
        x2 = (-b - math.sqrt(t))/(2*a)
        print("Two different roots x1=" + str(int(x1)) + " , x2=" + str(int(x2)))
