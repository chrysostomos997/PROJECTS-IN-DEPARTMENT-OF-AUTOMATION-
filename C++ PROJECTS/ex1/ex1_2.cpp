#include <iostream>
using namespace std;

int derivative(int);
void line(int );
int main()
{
    int n,r,ncr;
    line(10);
    cout<<endl;
    cout<<"How many balls:";
    cin>>n;
    cout<<"Combinations?:";
    cin>>r;
    ncr=derivative(n)/(derivative(r)*derivative(n-r));
    cout<<ncr<<endl;
     line(ncr);
}
int derivative(int n)
{
    int s,i;
    s=1;
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}
void line(int n)
{
    int i;
    for(i=1;i<=n;i++)
    cout<<"*";
    return;
}
