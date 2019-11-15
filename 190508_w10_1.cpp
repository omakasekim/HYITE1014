#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 
using namespace std;

int main()
{
	int number;
	string myName;
	int guessesTaken = 0;
	int guess;
	
	srand(time(NULL));
	number=rand()%20+1;

	cout << "Hello! What is your name?" << endl;
	cin >> myName; 

	cout << "well, " << myName << " I am thinking of a number between 1 and 20." << endl;

	while (guessesTaken < 6, guessesTaken++);{
		cout << "Take a guess." <<endl;
		cin >> guess;

	    if (guess < number);
	    	cout << "Your guess is too low." << endl;
			
    	if (guess > number);
	    	cout << "Your guess is too high." << endl;
			
	    if (guess == number);{
	    	cout << "Good job, " << myName << "! You guessed my number!"<< endl;
    		break;
    	}
    	if (guess != number);{
    		cout << "Nope. The number I was thinking of was " << number << endl;
    	}
		}
	
    return 0;
}
