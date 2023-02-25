#include <iostream>
using namespace std;

int parag(int n);

int main()
{
    int n,r,ncr;
    cout<<"Dose poses mpalles:";
    cin>>n;
    cout<<"Ana poses mpalles sunduazontai?:";
    cin>>r;
    ncr=parag(n)/(parag(r)*parag(n-r));
    cout<<ncr;
}
int parag(int n)
{
    int p,i;
    p=1;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
