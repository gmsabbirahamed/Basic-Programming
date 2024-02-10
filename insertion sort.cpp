//insertion sort
#include<iostream>
using namespace std;
int main()
{
    int n,temp,temp2,j;
    cout <<"Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin >> arr[i];

    for(int i=1 ; i<n ; i++)
    {
        temp = arr[i];
        for(j=i-1 ; temp < arr[j] && j>=0 ; j--)
                arr[j+1] = arr[j];
        arr[j+1] = temp;
    }
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << ' ' << endl;

    return 0;
}//G.M.SABBIR AHAMED
