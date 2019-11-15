#include <stdio.h>
#include <string.h>
#include <time.h>
#include <cstdlib>

int main(){
	
	main:
	srand(time(NULL));
	int number = rand() % 1000 + 1;
	int guess;
	int numa = (number/100);
	int numb = ((number%100)/10);
	int numc = number%10;
	int strike = 0;
	int ball = 0;
	char y;
	
    printf("%d %d %d %d\n", number, numa, numb, numc);
	while((numa != numb) && (numa != numc) && (numb != numc) && (number > 123 && number < 987)){
		printf("Guess numbers (123~987): ");
		scanf("%d", &guess);
		if(guess/100 == numa)
			strike++;
		if((guess%100)/10 == numb)
			strike++;
		if(guess%10 == numc)
			strike++;
		
		if(guess/100 == numb || guess/100 == numc)
			ball++;
		if((guess%100)/10 == numa || (guess%100)/10 == numc)
			ball++;
		if(guess%10 == numa || guess%10 == numb)
			ball++;
		
		printf("%d strike, %d ball\n ", strike, ball);
		if (strike ==3){
			printf("Do you want to play again? (y or n)");
			scanf("%s", &y);
			if(y == 'y')
				break;
			if(y == 'n')
				exit;
		}
		strike = 0;
		ball = 0;
			
	}
	goto main;
	}




