import sys

for ans in sys.stdin:
    ans = ans.strip()
    n = int(input())

    for t in range(n):
        a = b = 0
        flag = [0] * 4
        guess = input().strip()
        
        for i in range(4):
            if ans[i] == guess[i]:
                a += 1
                flag[i] = 1
        
        for j in range(4):
            if flag[j] != 1:
                for k in range(4):
                    if flag[k] == 0 and ans[k] == guess[j]:
                        b += 1
                        flag[k] = 2
                        break
        
        print("%dA%dB" % (a, b))
