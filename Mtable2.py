import random


anumb = random.randint(0, 9)
bnumb = random.randint(0, 9)

answer = anumb*bnumb


print(str(anumb) + '*' + str(bnumb) + ' = ? ')
guess = input()
guess = int(guess)

  

if guess == answer:
        print('Correct Answer.')

if guess != answer:
        print('Wrong answer,' + str(anumb) + '*' + str(bnumb) + '=' + str(answer))

        print()
