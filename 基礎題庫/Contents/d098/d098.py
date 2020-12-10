import sys

for temp in sys.stdin:
    total = 0
    for i in temp.split():
        if not i.isdigit():
            continue

        total += int(i)
    
    print(total)
