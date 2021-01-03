import sys

for n in sys.stdin:
    n = n.strip()

    print(n)
    for i in range(1, len(n)):
        print(n[:-i])
