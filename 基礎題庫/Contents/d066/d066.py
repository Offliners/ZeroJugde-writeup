import sys

for temp in sys.stdin:
    h, m = map(int, temp.strip().split())

    if h < 7 or h >= 17 or (h == 7 and m < 30):
        print("Off School")
    else:
        print("At School")
