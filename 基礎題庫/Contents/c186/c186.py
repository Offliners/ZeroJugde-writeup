import sys

for names in sys.stdin:
    names = names.split()

    for i in names:
        print(i) 
