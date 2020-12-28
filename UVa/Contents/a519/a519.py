import sys

fib = [0] * 81
def fibTable():
    fib[0] = fib[1] = 1
    for i in range(2, 81):
        fib[i] = fib[i - 1] + fib[i - 2]

for n in sys.stdin:
    n = int(n)

    if n == 0:
        break

    fibTable()
    print(fib[n])
