num = int(input("Enter number: "))
list = [[0 for x in range (num)] for y in range (num)]
n = 1
min = 0
max = num - 1
count = int ((num+1 / 2))
for i in range (count):
    for j in range(min, max+1):
        list[i][j]=n
        n=n+1
    for j in range (min+1,max+1):
        list[j][max]=n
        n=n+1
    for j in range (max-1,min-1,-1):
        list[max][j]=n
        n=n+1
    for j in range (max-1,min,-1):
        list[j][min]=n
        n=n+1
    min=min+1
    max=max-1

for i in range (num):
    for j in range(num):
        print(list[i][j], end = "\t")
    print()
             
