import sys

for word in sys.stdin:
    word = word.strip()
    temp = [word[0], word[-1]]
    mid = '_' * (len(word) - 2)
    
    print(mid.join(temp))
