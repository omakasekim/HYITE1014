import random

def comp(var1, var2):
    if var1>var2:
        return 1
    if var1<var2:
        return -1
    if var1==var2:
        return 0


var1=random.randint(0,100)
var2=101

while (var1!=var2):
    print('Number=?')
    var2=int(input())
    result = comp(var1, var2)
    if result==1:
        print('Larger than', var2, '.')
    if result==-1:
        print('Smaller than', var2, '.')
    if result==0:
        print('Yes, Right.')
