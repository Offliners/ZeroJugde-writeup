import sys

for name in sys.stdin:
    name = name.split()
    print(name[0] + " and " + name[1] + " sitting in the tree")
