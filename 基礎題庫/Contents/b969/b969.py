import sys

for name in sys.stdin:
    hello = input()
    names = name.split()

    for i in names:
        print(hello + ', ' + i)
