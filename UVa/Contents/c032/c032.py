import sys

def isPerfect(num):
    total = 1
    for i in range(2, num):
        if num % i == 0:
            total += i
    return total

count = 0
flag = 0
for temp in sys.stdin:
    temp = [int(e) for e in temp.split()]

    if count == 0:
        print("PERFECTION OUTPUT")

    for n in temp:
        if n == 0:
            print("END OF OUTPUT", end="")
            flag = 1
            break

        test = isPerfect(n)

        if n == test and n != 1:
            print("%5d  PERFECT" % n)
        elif n < test:
            print("%5d  ABUNDANT" % n)
        else:
            print("%5d  DEFICIENT" % n)
    
    if flag == 1:
        break 

    count += 1      
