import sys

for temp in sys.stdin:
    try:
        h, m = map(int, temp.split())
    except:
        break

    m += 30
    h += 2

    if m >= 60:
        m -= 60
        h +=1
    
    if h >= 24:
        h -= 24
    
    print("%02d:%02d" % (h, m))
