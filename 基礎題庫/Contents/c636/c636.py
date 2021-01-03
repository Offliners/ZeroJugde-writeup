import sys

symbol = ["豬", "鼠", "牛", "虎", "兔", "龍", "蛇", "馬", "羊", "猴", "雞", "狗"]

for n in sys.stdin:
    n = int(n)

    if n < 0:
        n += 121
    
    print(symbol[n % 12])
