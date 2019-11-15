import random
import time

anumb = random.randint(0, 9)
bnumb = random.randint(0, 9)
cnumb = random.randint(0, 9)
dnumb = random.randint(0, 9)
k=0
answer = anumb * bnumb + cnumb - dnumb

while k < 3:
        print(str(anumb) + '*' + str(bnumb) + '+' + str(cnumb) + '-' + str(dnumb))
        print ('1 ,', end=" ")
        time.sleep(1)
        print ('2 ,', end=" ")
        time.sleep(1)
        print ('3 :', end=" ")

   
        guess = int(input())



  

        if guess == answer:
                print('Correct Answer.')

        else:
                time.sleep(3)
                print('Wrong answer,' + str(anumb) + '*' + str(bnumb) + '+' + str(cnumb) + '-' + str(dnumb) + '=' + str(answer))

        anumb = random.randint(0, 9)
        bnumb = random.randint(0, 9)
        cnumb = random.randint(0, 9)
        dnumb = random.randint(0, 9)

        answer = anumb*bnumb+cnumb-dnumb
        k=k+1
        time.sleep(1)
