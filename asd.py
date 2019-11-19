num=0
print ('User input=', end='')
n=int(input())
array=[[0 for rows in range(n+1)]for cols in range(n+1)]
i=0
j=0
Dir=1
temp=n


for k in range(0, n-1):
        num+=1
        array[i][j]=num
        j+=Dir
        
while(True):

    if(n>=0):
        for k in range(0, n-1):
            num+=1
            array[i][j]=num
            i+=Dir
            
        Dir=Dir*(-1)
    else:
        break
    
    for k in range(0, n-1):
        num+=1
        array[i][j]=num
        j+=Dir
    
    n-=1

array[i][j]=temp*temp

for i in range(0, temp):
    for j in range(0, temp):
        print(array[i][j],' ', end='')
    print('')
    
