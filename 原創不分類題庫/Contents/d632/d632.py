import sys

for a in sys.stdin:
    a = a.strip()

    b= sys.stdin.readline().strip()

    carry = 0
    i = 31
    result = []
    while i >= 0:
        temp = int(a[i]) + int(b[i]) + carry
        result.append(temp % 2)
        carry = temp // 2
        i -= 1
    
    print(a)
    print(b)
    print("---------------------------------")
    result = result[::-1]
    for i in range(32):
        print(result[i], end="", sep="")
    print("\n****End of Data******************")
