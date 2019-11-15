#include <stdio.h>

int main(void){
	int k = 0;
	int arr_1d[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
	int arr_2d[3][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}};
	


	for(int i = 2; i>=0; i--){
		
			for(int j = 3; j>=0; j--){
				arr_1d[k]= arr_2d[i][j];
				printf("%d ", arr_1d[k]);
				k++;
			}
	}
}




