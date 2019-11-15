#include <cstdlib>
#include <time.h>
#include <iostream>
#include <stdlib.h>

 

using namespace std;

 

int main() {

      srand(time(0));
      int number;
      number = rand()%101;
      int guess;

      do {

            cout << "Enter your estimate: ";

            cin >> guess;

            if (guess < number)

                  cout << "Number larger than" << guess << endl;

            else if (guess > number)

                  cout << "Number is smaller than" << guess << endl;

            else

                  cout << "correct" << endl;

      } while (guess != number);
      return 0;

}
