import sys
for line in sys.stdin:
    M,D = line.split(" ")
    S = (int(M)*2+int(D))%3
    if(S == 2):
        print("大吉\n")
    elif(S == 1):
        print("吉\n")
    else:
        print("普通\n")
