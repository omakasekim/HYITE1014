val = int(input("enter value."))
a=0
b=0
while a<val:

        while b<2*a:
            if abs(a-b) <= a:
                print('* ',end=' ')
            else:
                print('  ',end=' ')
            b=b+1
        print()
        b=0
        a=a+1

a=4
b=0
i=1
while a>0:

        while b<2*a+1+i:
            if abs(a+1-b) <= a:
                print('* ',end=' ')
            else:
                print('  ',end=' ')
            b=b+1
        print()
        b=0
        a=a-1
