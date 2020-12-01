import sys

for data in sys.stdin:
    data = data.strip()

    if data == data[::-1]:
        print("yes")
    else:
        print("no")
