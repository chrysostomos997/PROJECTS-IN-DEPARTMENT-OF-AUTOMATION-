#include<iostream>
using namespace std;
#include <iomanip>
int main()
{
    double kostos;
    int apostasi,baros,c;
    cout<<"Dose varos : "<<endl;
    cin>>baros;
    if(baros<=39)
        kostos=0.6;
    else
    {
        cout<<"Dose apostasi : "<<endl;
        cin>>apostasi;
        c=apostasi/100;
        if(baros>=40&&baros<=49)
        {
            kostos=0.7+(0.1*c);
        }
        else
        {
            kostos=0.8+(0.2*c);
        }
    }
    cout<<"H apostasi einai :"<<apostasi<<"xiliometra."<<endl;
    cout<<"To kostos einai :"<<kostos<<" euro."<<endl;
    return 0;
}
