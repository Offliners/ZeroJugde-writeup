import sys

for m in sys.stdin:
    print((60 - (int(m) + 35) % 60) % 60)
