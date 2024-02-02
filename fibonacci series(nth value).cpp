//FIBONACCI SERIES NTH NUMBER
#include<iostream>
using namespace std;
int main()
{
    cout << "------------Fibonacci series------------" << endl;
    int n,a=0,b=1,fib;

    cout << "Enter a number: ";
    cin >> n;
    cout << n <<"th Fibonacci Number is: ";

    if(n == 0)
        cout << a;
    else if(n == 1)
    cout << b;

    else
    {
        for(int i=0 ; i<n-2 ; i++)
        {
            fib = a+b;
            a = b;
            b = fib;
        }
        cout << fib;
    }

    return 0;
}//G.M.SABBIR AHAMED

