import sys

pick = [0] * 101
for n in sys.stdin:
    n = int(n)

    if n == 0:
        break

    scores = [int(e) for e in sys.stdin.readline().split()]
    for i in scores:
        pick[i % 100] += 1
    
    total = pick[0] * (pick[0] - 1) // 2 + pick[50] * (pick[50] - 1) // 2
    pick[0] = pick[50] = 0
    
    for j in range(50):
        total += pick[j] * pick[100 - j]
        pick[j] = pick[100 - j] = 0

    print(total) 
