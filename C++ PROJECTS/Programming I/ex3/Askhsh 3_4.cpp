#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Dwse etos:";
    cin>>a;
    b=a*365;
    cout<<"O arithmos imerwn tou etous einai:"<<b<<endl;
    if (a%4 == 0)
    {
        if (a%100 == 0)
        {
            if(a%400 == 0)
                cout << "Disekto etos"<< endl;
            else
                cout<<"Kanoniko etos"<< endl;
        }
        else
            cout<<"Disekto etos"<< endl;
    }
    else
        cout<<"Kanoniko etos"<< endl;
    return 0;
}
