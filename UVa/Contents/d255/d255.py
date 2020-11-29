import sys

MAX = 501
phi = [0] * MAX
G = [0] * MAX
def init():
    for i in range(2, MAX):
        phi[i] = i
    
    for i in range(2, MAX):
        if phi[i] == i:
            j = i
            while j < MAX:
                phi[j] = phi[j] // i * (i - 1)
                j += i
        
        j = 1
        while j * i < MAX:
            G[j * i] += j * phi[i]
            j += 1

    for i in range(3, MAX):
        G[i] += G[i - 1] 


init()
for n in sys.stdin:
    n = int(n)

    if n == 0:
        break

    print(G[n])
