#include <iostream>
using namespace std;

void printline(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    for(int i = n - 1; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


int main(int n){
     cout << "Enter number of rows: ";
    cin >> n;
    printline(n);
}


