import sys

for T in sys.stdin:
    T = int(T)

    for i in range(T):
        n = int(input().strip())

        j = 1
        res = 0
        while j <= n ** 0.5:
            temp = n // j
            count = temp - n // (j + 1)
            res += j * count

            if temp != j:
                res += temp
            j += 1
        
        print(res)
