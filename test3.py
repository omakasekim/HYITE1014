height=int(input("Choose height: "))

def drawline(m):
    a=1
    b=''
    while a<=m/2:
        b+='*'
        j+=1
    while m/2<=j<=2*height-1-(m/2):
        b+=' '
        a+=1
    while 2*height-1-(m/2)<a<2*height:
        b+='*'
        a+=1
    print(s)

i=1
val=height-1
star=0

drawline(2*height-1)
star+=2*height-1

while val!=0:
    drawline(val*2)
    star+=val*2
    val-=1

val+=2
    
while val!=height:
    drawline(val*2)
    star+=val*2
    val+=1

drawline(2*height-1)
star+=2*height-1

print()
