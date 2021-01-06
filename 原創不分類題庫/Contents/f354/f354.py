import sys

table = [0] * 1000001
table[0] = 1
def tableInit():
    for i in range(1, 1000001):
        table[i] = table[i - 1]
        if i & 1 == 0:
            table[i] *= 2

            if table[i] >= 10007:
                table[i] -= 10007

tableInit()
for L in sys.stdin:
    L = int(L)
    print(table[L])
    
