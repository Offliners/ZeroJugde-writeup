import sys

for n in sys.stdin:
    try:
        n = int(n.strip())
    except:
        continue
    
    kill = assist = die = flag = 0
    for i in range(n):
        temp = input().strip()

        if temp == "Get_Kill":
            kill += 1
            flag += 1

            if flag == 1 or flag == 2:
                print("You have slain an enemie.")
            elif flag == 3:
                print("KILLING SPREE!")
            elif flag == 4:
                print("RAMPAGE~")
            elif flag == 5:
                print("UNSTOPPABLE!")
            elif flag == 6:
                print("DOMINATING!")
            elif flag == 7:
                print("GUALIKE!")
            else:
                print("LEGENDARY!")
        elif temp == "Get_Assist":
            assist += 1
        elif temp == "Die":
            if flag < 3:
                print("You have been slained.")
            else:
                print("SHUTDOWN.")
            
            die += 1
            flag = 0
        
    print("%d/%d/%d" % (kill, die, assist))
