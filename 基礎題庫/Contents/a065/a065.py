import sys

for temp in sys.stdin:
    for i in range(len(temp.strip()) - 1):
        print(abs(ord(temp[i]) - ord(temp[i + 1])), end="")
    print()
