import sys

for temp in sys.stdin:
    area, x, y, z = map(int, temp.split())

    if area == x == y == z == 0:
        break

    s1 = x * (y + 1) + 1
    s2 = y * (z + 1) + 1
    s3 = z * (x + 1) + 1
    area *= (1 - x / s1 - y / s2 - z / s3)
    
    print("%.2lf" % area)
