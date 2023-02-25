#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
int main ()
{
    double a,b,x,y,z;
    cout<<"Dose tn gwnia se moires:\n";
    cin>>a;
    b=(a*3.14159)/180;
    cout<<"H gwnia se aktinia einai:\n"<<b;
    x=sin(b);
    y=cos(b);
    z=tan(b);
    cout<<setfill('0');
    cout<<"\nTo imitono ths gwnias a einai:\n";
    cout<<setprecision(3)<<setw(10)<<x<<endl;
    cout<<"\nTo sinimitono ths gwnias a einai:\n";
    cout<<setprecision(3)<<setw(10)<<y<<endl;
    cout<<"\nH efaptomenh ths gwnias a einai:\n";
    cout<<setprecision(3)<<setw(10)<<z<<endl;
    return 0;
}
