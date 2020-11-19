import sys

for plain in sys.stdin:
    cipher = input()
    print((ord(cipher[0]) - ord(plain[0]) + 26) % 26)
