import time
a=4
b=0
while a>0:

        while b<10:
            if abs(5-b) <= a:
                print('* ',end=' ')
            else:
                print('  ',end=' ')
            b=b+1
        print()
        b=0
        a=a-1
a=0
b=0
while a<5:

        while b<10:
            if abs(5-b) <= a:
                print('* ',end=' ')
            else:
                print('  ',end=' ')
            b=b+1
        print()
        b=0
        a=a+1


