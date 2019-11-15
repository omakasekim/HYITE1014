def selectSort(arr):
    n = len(arr)
 
    for i in range(n):
 
        for j in range(0, n-i-1):
  
            
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
 



import random

arr = []
s = 0

while s <= 50:
    val = random.randint(0,100)
    arr.append(val)
    s=s+1
        
print (arr)
print('max:'+ str(max(arr)))
print('min:'+ str(min(arr)))
selectSort(arr)

for i in range(len(arr)):
    print (arr[i], end = ' ')

    
