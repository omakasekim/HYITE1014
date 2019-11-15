#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


using namespace std;

    int chosenCave;
    int caveNumber;
    
    
void displayIntro(){
    cout << "You are in a land full of dragons. In front of you," << endl;
    cout << "you see two caves. In one cave, the dragon is friendly" << endl;
    cout << "and will share his treasure with you. The other dragon" << endl;
    cout << "is greedy and hungry, and will eat you on sight." << endl;
}

int chooseCave(){
    int cave;
    while (cave != 1 && cave != 2){
        cout << "Which cave will you go into? (1 or 2)" << endl;
        cin >> cave;
    }
    return cave;
        
}

void checkCave(int chosenCave){
	
    srand(time(NULL));
    cout << "You approach the cave..." << endl;
    sleep(2);
    cout <<"It is dark and spooky..."<< endl;
    sleep(2);
    cout <<"A large dragon jumps out in front of you! He opens his jaws and..."<< endl;
    getch();
    sleep(2);
    
    int friendlyCave  = rand()%2+1;

    if (chosenCave == friendlyCave){
        cout << "Gives you his treasure!" << endl;
   }
    else{
	
        cout << "Gobbles you down in one bite!" << endl;
}

}


int main(){
        int playAgain=1;
        
        while (playAgain){
            displayIntro();
          
            int caveNumber = chooseCave();
            checkCave(caveNumber);
        
             char in[1000];
            cout << "Do you want to play again? (yes or no)" << endl;
            scanf( "%s" , &in);
            if(!strcmp(in,"no")) playAgain = 0;
            
            }
 
return 0;
}
    

