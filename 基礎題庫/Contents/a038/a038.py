import sys

for num in sys.stdin:
    rev = list(num.strip())
    rev = "".join(reversed(rev))
    print(int(rev))
