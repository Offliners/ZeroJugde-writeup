import sys

for temp in sys.stdin:
    n, m = map(int, temp.strip().split())

    if m == 0 or (n - 1) % m == 0:
        print("Go Kevin!!")
    else:
        print("No Stop!!")
