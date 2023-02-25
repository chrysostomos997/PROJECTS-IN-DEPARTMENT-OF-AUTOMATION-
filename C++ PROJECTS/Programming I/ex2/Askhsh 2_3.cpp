#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
int main()
{
    double x,y,z,e;
    cout<<"Dose enan arithmo:";
    cin>>x;
    y=sqrt(x);
    z=pow(x,1/3.);
    e=exp(2*x);
    cout<<"H tetragwnikh riza tou arithmou x einai:\n"<<y<<endl;
    cout<<"H trith h kivikh riza tou arithmou x einai:\n"<<z<<endl;
    cout<<"H ekthetikh tis diplasias timhs tou arithmou x einai:\n"<<e<<endl;
    return 0;
}
