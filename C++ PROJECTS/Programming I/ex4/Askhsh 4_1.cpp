#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    double a,p,g;
    //a(athroisma),g(ginomeno),p(pragmatikos arithmos)
    int i;
    g=1;
    a=0;
    i=1;
    while(i<4)
    {
    cout<<"Dose pragmatiko arithmo :";
    cin>>p;
    a=a+p;
    g=g*p;
    i++;
    }
    cout<<"To athrisma tous einai : "<<a<<endl;
    cout<<"To ginomeno tous einai :"<<g<<endl;
    return 0;
    }
