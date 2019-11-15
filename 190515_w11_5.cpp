#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);;
}

int main()
{
    int n;
    while (1)
    {
        cout<<"Fibonacci(" << n << ")";
        cin>>n;
        if (n == 0)
            return 0;
        cout<<fibonacci(n)<<endl;
    }
    return 0;
}
