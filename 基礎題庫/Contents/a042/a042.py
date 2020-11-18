import sys

for num in sys.stdin:
    num = int(num)
    print(num ** 2 - num + 2)
