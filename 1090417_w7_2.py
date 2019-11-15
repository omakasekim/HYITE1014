print('Please input the last number')
num=int(input())
j=0
clap=0
print('-------- start --------')
temp=num

while temp>0:
    temp=int(temp/10)
    j+=1

for i in range (1, num+1):
    clap=0
    temp=i
    for k in range (0, j):
        if temp%10 == 3 or temp%10 == 6 or temp%10==9:
            clap+=1
        temp=int(temp/10)

    if clap==0:
        print(i)
    if clap!=0:
        while clap>0:
            print('clap ', end='')
            clap-=1
        print('')
