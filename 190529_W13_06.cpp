#include <stdio.h>

int main(){
	
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *ptr = &arr[0];
	ptr = arr;
	int i;
	int j;
	int sum = 0;

	
	for(int i=0;i<sizeof(arr)/sizeof(int); i++)
	{
		printf("%d", *(ptr+i));
		sum = sum + *(ptr+i);
	}
	printf("\nThe sum of array elements : %d\n", sum);
	
	
	for(j = sizeof(arr)/sizeof(int)-1;j>=0;j--)
	{
		printf("%d", *(ptr+j));
	}
   
	return 0;
}



/*
	
	printf("%d\n", *ptr);
	printf("%d\n", *(ptr+1));
	printf("%d\n", *(ptr+2));
	printf("%d\n", *(ptr+3));
	printf("%d\n", *(ptr+4));
	printf("%d\n", *(ptr+5));
	printf("%d\n", *(ptr+6));
	printf("%d\n", *(ptr+7));
	printf("%d\n", *(ptr+8));
*/
