import sys

for temp in sys.stdin:
    R, A = map(int, temp.split())

    if R == A:
        A -= 3
    
    B = R - A
    if A < B:
        print(str(A) + "+" + str(B) + "=" + str(R))
    else:
        print(str(B) + "+" + str(A) + "=" + str(R))
