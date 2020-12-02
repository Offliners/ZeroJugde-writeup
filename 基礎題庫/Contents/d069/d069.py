import sys
import calendar

for n in sys.stdin:
    n = int(n.strip())

    for i in range(n):
        year = int(input().strip())

        if calendar.isleap(year):
            print("a leap year")
        else:
            print("a normal year")
