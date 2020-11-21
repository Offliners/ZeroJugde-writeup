import sys

for w in sys.stdin:
    w = int(w)
    h = int(input())
    bmi = (w * 10000 / h / h)
    print(round(bmi, 1))
