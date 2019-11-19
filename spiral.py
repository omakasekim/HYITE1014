val=0
print ('User input=', end='')
n=int(input())

h=[[0 for rows in range(n+1)]for cols in range(n+1)]
i=0
j=0
k=1
l=n


for k in range(0, n-1):
        val+=1
        h[i][j]=val
        j+=k
        
while True:

    if(n>=0):
        for k in range(0, n-1):
            val+=1
            h[i][j]=val
            i+=k
            
        k=k*(-1)
    else:
        break
    
    for k in range(0, n-1):
        val+=1
        h[i][j]=val
        j+=k
    
    n-=1

h[i][j]=l*l

for i in range(0, l):
    for j in range(0, l):
        print(h[i][j],' ', end='')
    print('')
