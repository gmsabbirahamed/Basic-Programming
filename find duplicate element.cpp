//FIND DUPLICATE ELEMENT IN AN ARRAY
#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter 12 element: " << endl;
    int arr[12];
    for(int i=0 ; i<12 ; i++)
        cin >> arr[i];
        for(int i=0 ; i<12 ; i++)
        {
            for(int j=i+1 ; j<12 ; j++)
            {
                if(arr[i] == arr[j])
                    cout << "Duplicate: " << arr[i] << endl;
            }
        }
    return 0;
}//G.M.SABBIR AHAMED
