import sys

for l in sys.stdin:
    l = int(l)

    print(l ** 2 // 16)
