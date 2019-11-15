#include <stdio.h>


int main(void){

	int m = 7;
	int *ptr = &m;
	
	printf("%p\n", ptr);
	printf("%p\n", *ptr);
	
	
	*ptr = 10;
	printf("%d\n", m);
	
}

