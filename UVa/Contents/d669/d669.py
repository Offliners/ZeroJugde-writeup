import sys

for temp in sys.stdin:
    h1, m1, h2, m2 = map(int, temp.split())

    if h1 == h2 == m1 == m2 == 0:
        break

    if h1 * 60 + m1 <= h2 * 60 + m2:
        print(60 * (h2 - h1) + (m2 - m1))
    else:
        print(1440 + 60 * (h2 - h1) + (m2 - m1))
