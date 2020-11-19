import sys

for s in sys.stdin:
    temp = []
    for i in range(len(s) - 1):
        temp.append(str(ord(s[i])))
    
    result = "_".join(temp)
    print(result)
