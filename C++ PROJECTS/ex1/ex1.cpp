#include <iostream>
using namespace std;

int derivative(int n);

int main()
{
    int n,r,ncr;
    cout<<"How many balls :";
    cin>>n;
    cout<<"Combinations?:";
    cin>>r;
    ncr=derivative(n)/(derivative(r)*derivative(n-r));
    cout<<ncr;
}
int derivative(int n)
{
    int p,i;
    p=1;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
