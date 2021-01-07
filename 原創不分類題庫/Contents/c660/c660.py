import sys

for peoples in sys.stdin:
    peoples = peoples.strip().lower()
    
    for i in range(len(peoples)):
        if peoples[i] != ' ':
            print(peoples[:i] + str(peoples[i].upper() + peoples[i + 1:]))
