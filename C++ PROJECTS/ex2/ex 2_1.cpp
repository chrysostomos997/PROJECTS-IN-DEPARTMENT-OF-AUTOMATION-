#include <iostream>
using namespace std;

bool isprotos(int);


int main()
{
    int n,i;
    cout<<"mehri poion arithmo:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(isprotos(i))
        cout<<i<<endl;
    }
}

bool isprotos(int x)
{
    int k;
    for(k=2;k<=x/2;k++)
    {
        if(x%k==0)
        return false;
    }
    return true;
}
