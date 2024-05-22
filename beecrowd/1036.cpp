#include <iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, x, y;
    cin >> a >> b >> c;

    if( (pow(b,2)-(4*a*c))<0 || a==0 || (b==0 && c==0) )
        cout<<"Impossivel calcular" << endl;
    else
    {
        x = (-b + pow((pow(b,2)- (4*a*c) ),.5))/ (2*a) ;
        y = (-b - pow((pow(b,2)- (4*a*c) ),.5))/ (2*a) ;

        cout << "R1 = " << fixed << setprecision(5) << x << endl;
        cout << "R2 = " << fixed << setprecision(5) << y << endl;
    }


    return 0;
}
//G.M.SABBIR AHAMED
