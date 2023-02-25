#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int k,a,p,i,b;
    p=1;
    for(int i=1; i<=10; i++)
    {
        cout << i <<"\t";
    }
    for(int b=1 ; b<=75 ; b++)
    {
        cout << "-";
    }
    cout << endl;
    for(int k=1 ; k<=10 ; k++)
    {
        for(int a=1 ; a<=10 ; a++)
        {
            p = k * a;

            cout << p <<"\t";
        }
        cout << endl;
    }
    return 0;
}
