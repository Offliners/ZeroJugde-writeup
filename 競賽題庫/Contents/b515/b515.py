import sys

morse = ['.-', '-...', '-.-.', '-..', '.', '..-.', '--.', '....', '..', '.---', '-.-', '.-..', '--', '-.', '---', '.--.', '--.-', '.-.', '...', '-', '..-', '...-', '.--', '-..-', '-.--', '--..']

for n in sys.stdin:
    n = int(n)

    for i in range(n):
        temp = input().strip().split()

        for code in temp:
            print(chr(morse.index(code) + 65), end="") 
        print()
