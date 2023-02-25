#include<iostream>
using namespace std;
#include<cmath>
int main (void)
{
    int a,b,c,diak;
    double r1;
    cout<<"Dose sintelestes triwnimou : ";
    cin>>a>>b>>c;
    diak=b*b-4*a*c;
    if(diak!=0)
    cout<<"H diakrinousa dn einai midenikh";
    else
    {
        r1=((-b)+sqrt(diak))/ (2*a);
        cout<<"Riza = " <<r1<<"\n";
    }
return 0;
}
