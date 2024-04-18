//FIBONACCI SERIES
#include<iostream>
using namespace std;
int main()
{
    cout << "------------Fibonacci series------------" << endl;
    int n,a=0,b=1,fib=1;

    cout << "Enter a number of term: ";
    cin >> n;
    cout <<"First "<<n<< " Fibonacci series is: ";

    if(n == 0)
        cout << a;
    else if(n == 1)
    cout << a <<' ' << b;

    else
    {
        cout << '0' <<' ' <<'1'<<' ';
        for(int i=0 ; i<n-2 ; i++)
        {
            cout << fib <<' ';
            fib = fib+a;
            a = b;
            b = fib;
        }
    }

    cout<<endl<<endl;

    return 0;
}//G.M.SABBIR AHAMED

