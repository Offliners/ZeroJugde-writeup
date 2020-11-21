import sys
import calendar

for year in sys.stdin:
    year = int(year)

    if(calendar.isleap(year)):
        print("a leap year")
    else:
        print("a normal year")
