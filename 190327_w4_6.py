import random

answer='yes'
gametry = 0
wintry = 0
while(answer!='no'):
    gametry +=1
    result=random.randint(0,2)
    print('가위..바위..보!')
    print('your choice : ', end='')
    user=input()
    if result==0:
        result='scissors'
    if result==1:
        result='rock'
    if result==2:
        result='paper'

    print('result : '+result+' user: '+user)
    
    if user==result:
        print('Draw!')
    elif user=='rock':
        if result=='paper':
            print('You Lose!')
        if result=='scissors':
            print('You Win!')
            wintry+=1
    elif user=='paper':
        if result=='scissors':
            print('You Lose!')
        if result=='rock':
            print('You Win!')
            wintry+=1
    elif user=='scissors':
        if result=='rock':
            print('You Lose!')
        if result=='paper':
            print('You Win!')
            wintry+=1
    print('play again? : ', end='')
    answer=input()

if answer == 'no':
    print((int(wintry)/int(gametry))*100)
