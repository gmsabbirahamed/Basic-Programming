//SUM OF FIRST NTH TERM
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Sum of the first "<< n <<" digits: ";

    for (int i=1 ; i<=n ; i++)
    {
        sum = sum+i;
    }
    cout << sum;

    return 0;
}//G.M.SABBIR AHAMED
