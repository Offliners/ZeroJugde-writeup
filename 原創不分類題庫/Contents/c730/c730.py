import sys

for temp in sys.stdin:
    data = [int(e) for e in temp.split()]
    threshold = int(input())
    data = [e for e in data if e <= threshold + 30]
    print(len(data))
