//LINEAR SEARCH
#include<iostream>
using namespace std;
int main()
{
    int n,key;
    cout << "How many Numbers do you want to input: ";
    cin >> n;
    int arr[n];
    cout << "Enter "<<n<<" number:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter search Number: ";
    cin >> key;

    for(int i=0 ; i<n ; i++)
    {
        if(key == arr[i])
        {
            cout << "Found"<<endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;

    return 0;
}//G.M.SABBIR AHAMED
