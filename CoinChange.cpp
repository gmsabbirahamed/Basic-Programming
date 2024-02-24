#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cout << "Enter number of coin: ";
    cin >> n;
    int arr[n];
    cout << "Enter coin: ";
    for(int i=0 ; i<n ; i++)
        cin >> arr[i];
    sort(arr, arr+n, greater<int>());

    cout << "amount: ";
    cin >> a;
    cout << "Required Coins: ";

    for(int p=0 ; p<n ; p++)
    {
        if(a>=arr[p])
        {
            cout << arr[p] << " ";
            a = a-arr[p];
            p--;
        }
    }
    cout<<endl<<"Remaining Coin: "<<a<<endl;

    return 0;
}
//G.M.SABBIR AHAMED
