import sys

for num in sys.stdin:
    num = int(num)

    print((num ** 3 + 5 * num + 6) // 6)
