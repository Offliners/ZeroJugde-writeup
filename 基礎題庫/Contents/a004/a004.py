import sys
for line in sys.stdin:
    year = int(line)
    if((year%400 == 0) or ((year % 4 == 0) and (year %100 != 0))):
        print("閏年")
    else:
        print("平年")
