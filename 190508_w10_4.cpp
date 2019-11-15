#include <iostream>

using namespace std;

int main()
{
    int number=5, i, j, k=number - 1;
   
   
    for (int i = number; i > 0; i--){
        for (int j = number; i < j; j--)
        {
            cout << " ";
        }
        for (int j = 0; i > j; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

  	for (int i=0; i<number; i++){
		 for (int j=0; j<k; j++) 
            cout <<" "; 
	
    	k = k -1;

 		for (int j=0; j<=i; j++ ) 
     	   { 
		cout << "* ";
    	}
	    cout << endl;
	}
	return 0;
}