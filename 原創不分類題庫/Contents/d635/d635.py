import sys

for n in sys.stdin:
    n = int(n)

    if n < 0:
        print("-1")
    else:
        dec2otc = "".join(oct(n))
        print(dec2otc[2:])
