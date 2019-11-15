
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[1000];
	char gender[1000];
	int dob;
	char destination[1000];
	int period;

	printf("<<Interview for Travel Plan\n");
	printf("Input your name:\n");
	scanf("%s", &name);
	printf("Gender:\n");
	scanf("%s", &gender);
	printf("Date of Birth<ex. 19910212>:\n");
	scanf("%d", &dob);
	printf("Destination:\n");
	scanf("%s", &destination);
	printf("Period of trip<ex. 5>:\n");
	scanf("%d", &period);
	printf("======================\n");
	printf("NAME:\t\t");
	printf("%s", name);
	printf("\nGENDER:\t\t");
	printf("%s", gender);
	printf("\nDATE OF BIRTH:\t\t");
	printf("%d", dob);
	printf("\nDESTINATION:\t\t");
	printf("%s", destination);
	printf("\nPERIOD OF TRIP:\t\t");
	printf("%d", period);
	printf("\n======================\n");

	return 0;

}

