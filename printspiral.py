def printSpiral(n): 
      
    for i in range(0, n): 
        for j in range(0, n): 
              
            # Finds minimum of four inputs 
            x = min(min(i, j), min(n - 1 - i, n - 1 - j)) 
              
            # For upper right half 
            if (i <= j) : 
                print((n - 2 * x) * (n - 2 * x) -
                      (i - x)- (j - x), end = "\t") 
  
            # For lower left half 
            else : 
                print(((n - 2 * x - 2) *
                       (n - 2 * x - 2) +
                       (i - x) + (j - x)), end = "\t") 
        print()


n = int(input())
printSpiral(n)
