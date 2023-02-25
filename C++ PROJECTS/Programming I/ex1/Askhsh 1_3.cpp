#include<iostream>
using namespace std;
#include<iomanip>
int main ()
{
    double a,b,c;
    cout<<"Dose ton arithmo a : ";
    cin>>a;
    cout<<"Dose ton arithmo b : ";
    cin>>b;
    c=a+b;
    cout<<setfill('0');
    cout<<setprecision(3)<<setw(10)<<c<<endl;
    return 0;
}

