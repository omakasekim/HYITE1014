#include <stdio.h>



int getMax(int arr[], int n){
	int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < *(arr+i))
            max = *(arr+i);
    }
    return max;
}

int getMin(int arr[], int n){
	int min = 999999999;


    for (int i = 0; i < n; i++)
    {
        if (min > *(arr+i))
            min = *(arr+i);
	}
	return min;
}



int main()
{	

	int arr[5] = {};
	
	for(int i = 0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("%d\n", getMax(arr,5));
	printf("%d\n", getMin(arr,5));
	
	return 0;
}
