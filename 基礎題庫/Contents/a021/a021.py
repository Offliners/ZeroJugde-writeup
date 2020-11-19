import sys

for formula in sys.stdin:
    temp = formula.split()

    if temp[1] == '/':
        print(int(temp[0]) // int(temp[2]))
    else:
        print(eval(formula))
