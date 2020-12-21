import re
import sys

for temp in sys.stdin:
    temp = re.findall('[a-zA-Z]+', temp)
    
    print(len(temp))
