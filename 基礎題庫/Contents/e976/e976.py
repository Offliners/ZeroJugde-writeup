import sys

for temp in sys.stdin:
    try:
        h, m, s = map(int, temp.split())
    except:
        continue

    if h * s >= m:
        print(h, m, str(s) + ".", "I will make it!")
    else:
        print(h, m, str(s) + ".", "I will be late!")
