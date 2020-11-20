import sys

arr = {0 : 'U', 1 : 'G', 2 : 'Y', 3 : 'T', 4 : 'I'}
for n in sys.stdin:
    print(arr[int(n) % 5])
