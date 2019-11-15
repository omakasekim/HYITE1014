#include <stdio.h> 

const int M = 3; 
const int N = 4; 
const int O = 12;

void print(int arr_2d[M][N]) 
{ 
    int i, j; 
    for (i = 0; i < M; i++) 
      for (j = 0; j < N; j++) 
        printf("%d ", arr_2d[i][j]); 
} 


  
int main() 
{ 
	
	
    int arr_2d[3][4] = { {10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120} }; 
    int *ptr = &arr_2d[0][0];
    print(arr_2d); 
	
	for (int i = 0; i < O; i++) {
    	printf("%d ", *(ptr + i));
  	}
    return 0; 
} 


