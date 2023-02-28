#include <iostream>
using namespace std;
bool prime(int );
void line (int);
int main()
{
    int n;
    cout<<"up to which integer n?: ";
    cin>>n;
    for(int i=1 ; i<=n ;i++)
    {
        if(prime(i))
        cout<<i<<endl;
        if(i%100==0)
        {
           line(i/100);
           cout<<endl;
        }

    }
}
bool prime(int n)
{
    int i;
    for(i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
void line(int n)
{
    for(int i=1 ; i<=n ; i++)
    cout<<'*';
}
