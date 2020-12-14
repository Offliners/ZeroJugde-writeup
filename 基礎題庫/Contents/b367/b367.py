import sys

for T in sys.stdin:
    try:
        T = int(T.strip())
    except:
        continue
    for i in range(T):
        N, M = map(int, input().split())

        mat = []
        for j in range(N):
            mat += input().split()
        
        mat_rev = [e for e in reversed(mat)]
        if mat == mat_rev:
            print("go forward")
        else:
            print("keep defending")
