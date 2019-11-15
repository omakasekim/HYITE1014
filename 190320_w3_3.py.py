import random
import time

anumb = random.randint(0, 9)
bnumb = random.randint(0, 9)

answer = anumb*bnumb
k = 0 

while k < 4:

        print(str(anumb) + '*' + str(bnumb) + ' = ? ')
        guess = input()
        guess = int(guess)

        k=k+1

        if guess == answer:
                print('Correct Answer.')

        if guess != answer:
            time.sleep(5)
            print('Wrong answer,' + str(anumb) + '*' + str(bnumb) + '=' + str(answer))

        print()
        if k == 3:
                break
        anumb = random.randint(0, 9)
        bnumb = random.randint(0, 9)

        answer = anumb*bnumb
        print()
