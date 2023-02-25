#include <iomanip>
#include <iostream>
#define N 2
#define PIN 1234
using namespace std;

int main()

{
    int pin,i;
    i=0;
    do
    {
        cout<<"Dose kodiko PIN : ";
        cin>>pin;

        if   (pin==PIN)
            cout << "Sostos kodikos PIN!"<<endl;
        else
            cout << "Apomenoun "<<N-i<<" prospatheies akomi."<<endl;

        i++;
    }
    while (pin!=PIN && i<3);
    return 0;
}


