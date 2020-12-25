import sys

for names in sys.stdin:
    names = names.strip().split()

    for n in names:
        print(n[0].upper() + n[1:])
