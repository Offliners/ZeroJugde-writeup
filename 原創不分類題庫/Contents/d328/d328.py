import sys

for temp in sys.stdin:
    s1, s2, s3 = map(float, temp.split())

    area = s1 + s2 + s3 + (s2 * s3 / 2 / s1) + (s1 * s3 / 2 / s2) + (s1 * s2 / 2 / s3)
    print("%.2lf" % area)
