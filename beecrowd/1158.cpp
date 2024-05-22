#include <iostream>
using namespace std;

int main()
{
    long int n, sum=0;
    cin >> n;

    long int arr[n], arr2[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i] >> arr2[i];

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]%2 == 0 )
        {
            arr[i]++;
            for(int j =0 ; j<arr2[i] ; j++)
            {
                sum = sum+arr[i];
                arr[i] = arr[i]+2;
            }
            cout << sum << endl;
            sum=0;
        }
        else
        {
            for(int j=0 ; j<arr2[i] ; j++)
            {
                sum = sum+arr[i];
                arr[i] = arr[i]+2;
            }
            cout << sum << endl;
            sum=0;
        }

    }

    return 0;
}
//G.M.SABBIR AHAMED

