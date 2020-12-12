import sys

for n in sys.stdin:
    score = [int(e) for e in input().split()]
   
    score = sorted(score)
    print(*score)

    failSet = [e for e in score if e < 60]
    if not failSet:
        print("best case")
    else:
        print(max(failSet))
    
    passSet = [e for e in score if e >= 60]
    if not passSet:
        print("worst case")
    else:
        print(min(passSet))
