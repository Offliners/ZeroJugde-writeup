import sys

def dfs(n):
    if n == num:
        print(*binary, sep="")
        return None
    
    binary[n] = '0'
    dfs(n + 1)
    binary[n] = '1'
    dfs(n + 1)

for num in sys.stdin:
    num = int(num)
    binary = [0] * num
    dfs(0)
