import sys

for L in sys.stdin:
    L = int(L)
    temp = int(L ** 0.5)
    step = 2 * temp - 1

    step += (L - temp ** 2) // temp

    if L % temp != 0:
        step += 1

    print(step)
