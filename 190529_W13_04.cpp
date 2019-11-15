#include <stdio.h>

int main(void){
	
	double arr[5] = {1., 2., 3., 4., 5.};
	double *ptr = NULL;
	ptr = &arr[0]; 

	printf("%p\n", ptr);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	
	printf("%p\n", ptr+2);
	printf("%p\n", arr+2);
	printf("%p\n", &arr[2]);
	
	printf("%p\n", *ptr);
	printf("%p\n", *arr);
	printf("%p\n", arr[0]);
	
	printf("%p\n", *(ptr+2));
	printf("%p\n", *(arr+2));
	printf("%p\n", arr[2]);
	
}
