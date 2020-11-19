import sys

for hour in sys.stdin:
    print((int(hour) + 9) % 24)
