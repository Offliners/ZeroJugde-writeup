import sys

maxValue = 0
for i in range(7):
    temp = [int(e) for e in input().split()]

    if sum(temp) > maxValue:
        maxValue = sum(temp)
        day = i + 1

if maxValue < 9:
    day = 0

print(day)
