import sys

for temp in sys.stdin:
    a, b = map(int, temp.split())
    print(a ^ b)
