import sys

for names in sys.stdin:
    n = int(input())

    names = names.strip().split()
    print(names[-n])
