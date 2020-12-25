import sys

for spl in sys.stdin:
    spl = spl.strip("\n")   
    names = input().strip("\n").split(spl)

    for i in names:
        print(i)
