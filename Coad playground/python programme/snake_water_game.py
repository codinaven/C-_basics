import random

def gameWin(comp,you):
    if comp ==you:
        return None
    elif comp =='s':
        if you=='w':
            return False
        elif you=='g':
            return True
    elif comp=='w':
        if you=='g':
            return True
        elif you=='s':
            return False
    elif comp=='g':
        if you=='w':
            return True
        elif you=='s':
            return False
print("comp turn:snake(s) water(w) or gun (g)?")
randNo = random.randint(1,3)
if randNo == 1:
    comp ='s'
elif randNo == 2:
    comp ='w'
elif randNo==3:
    comp='g'        
you=input("player's turn:snake(1) water(2) or gun(3)?")
a=gameWin(comp,you)
if a==None:
    print("the is a tie!")
elif a:
    print("you win!")
else:
    print("you lose!")
