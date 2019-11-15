#include <stdio.h>



int main(void){
	
	double arr[5] = {1., 2., 3., 4., 5.};


	printf("%p\n", &arr[0]);
	printf("%p\n", arr);
	
	printf("%p\n", &arr[1]);
	printf("%p\n", arr+1);
	
	printf("%p\n", &arr[2]);
	printf("%p\n", arr+2);
	
	
	
	printf("%lf\n", arr[0]);
	printf("%lf\n", *arr);
	
	printf("%lf\n", arr[1]);
	printf("%lf\n", *(arr+1));
	printf("%lf\n", *arr+1);
	
	printf("%lf\n", arr[2]);
	printf("%lf\n", *(arr+2));
	printf("%lf\n", *arr+2);


	return 0;
}




