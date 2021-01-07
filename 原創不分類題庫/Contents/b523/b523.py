import sys
from collections import OrderedDict

known = OrderedDict()
i = 0

for temp in sys.stdin:
    temp = temp.strip()
    if  known.get(temp) != None:
        print('YES')
    else:
        print('NO')
        known[temp] = i
        i += 1
