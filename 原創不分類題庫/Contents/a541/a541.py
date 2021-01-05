import sys
from collections import OrderedDict

n = int(input())

known = OrderedDict()
for i in range(n):
    known[input()] = i

m = int(input())
for j in range(m):
    temp = input()
    if  known.get(temp) != None:
        print('yes')
    else:
        known[temp] = n
        n += 1
        print('no')
