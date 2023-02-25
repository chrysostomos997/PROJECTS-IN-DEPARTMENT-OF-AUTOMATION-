#include <iostream>
using namespace std;

int parag(int);
void grammi(int );
int main()
{
    int n,r,ncr;
    grammi(10);
    cout<<endl;
    cout<<"Dose poses mpalles:";
    cin>>n;
    cout<<"Ana poses mpalles sunduazontai?:";
    cin>>r;
    ncr=parag(n)/(parag(r)*parag(n-r));
    cout<<ncr<<endl;
     grammi(ncr);
}
int parag(int n)
{
    int s,i;
    s=1;
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}
void grammi(int n)
{
    int i;
    for(i=1;i<=n;i++)
    cout<<"*";
    return;
}
