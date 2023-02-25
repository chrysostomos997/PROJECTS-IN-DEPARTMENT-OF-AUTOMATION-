#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int i,k,p;
    p=1;
    for(int i=1 ; i<=10 ; i++)
    {
        for(int k=1 ; k<=10 ; k++)
        {
            p=i * k;
            cout << setw(3);
            cout << p << "\t";
        }
        cout << endl;
    }
    return 0;
}
