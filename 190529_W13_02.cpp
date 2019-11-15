#include <stdio.h>

int mean(int array[], const int n){
	
	int x = 0;
	
	for(int i=0; i<n;i++){
		x+=array[i];
		
	}
	return (float)x/n;
	
}

int main(void){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	printf("%d", mean(arr, 7));
}






/*
There is no 'built-in' way to determine the length inside the function.
However you pass array, sizeof(array) will always return the pointer size. 
So the best way is to pass the number of elements as a seperate argument.
must find sum, and divide by n, thus n is required.

*/




