import sys

for s in sys.stdin:
    s = s.strip()

    size = len(s)
    for i in range(size):
        for j in range(size):
            print(s[(i + j) % size], end="")
        print()
