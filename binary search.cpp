#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,key,l,r,mid;
    cout << "Enter size of array : ";
    cin >> n;

    mid = n/2;
    int arr[n];
    l=0;
    r=n;

    for(int i=0 ; i<n ; i++)
        cin >> arr[i];
    sort(arr,arr+n);

    cout << "Enter search key: ";
    cin >> key;

    while(l!=r)           //for(int i=0 ; i<12 ; i++)
    {

        if(arr[mid] == key)
        {
            cout << "Found" << endl;
            break;
        }
        else if (arr[mid] > key)
        {
            l = l;
            r = mid-1;
            mid = (l+r)/2;
        }
        else //if(arr[mid] < key)
        {
            l = mid+1;
            r = r;
            mid = (l+r)/2;
        }

    }
    if(arr[mid] != key)
        cout << "Not found" <<endl;

    return 0;
}
