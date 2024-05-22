#include<iostream>
using namespace std;
int main()
{
    long int x, y, sum=0;
    cin >> x >> y;
    if(x>y)
    {
        int t=x;
        x=y;
        y=t;
    }
    while(x<y+1)
    {
        if(x%13 != 0)
            sum = sum+x;
        x++;
    }
    cout << sum << endl;
    return 0;
}
//G.M.SABBIR AHAMED
