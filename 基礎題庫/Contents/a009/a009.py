import sys

for s in sys.stdin:
    txt = ""
    for i in s:
        txt += chr(ord(i)-7)
    print(txt)
