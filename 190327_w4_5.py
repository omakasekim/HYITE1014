def printLine(n):
    i=1
    while i<=2*n:
        if i<=n:
            j=1
            while j<=i:
                print(j, end='')
                j+=1
            print('')
        if i>n:
            j=1
            while j<=2*n+1-i:
                print(j, end='')
                j+=1
            print('')
        i+=1

n=int(input("Choose a value."))
printLine(n)
