#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

    int a,t,b;
    double c,f;
    cout<<"Dose arxiki timi: ";
    cin>>a;
    cout<<"Dose teliki timi: ";
    cin>>t;
    cout<<"Dose bhma: ";
    cin>>b;

    cout<<"\nCelsius"<<"\tFahrenheit" <<endl;

    for (c=a; c<=t; c+=b)
    {
        f=(1.8*c) + 32;
        cout << c << "\t" << f <<endl;
    }
    return 0;
}
