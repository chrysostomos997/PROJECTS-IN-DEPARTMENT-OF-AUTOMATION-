#include <iostream>
using namespace std;

bool prime(int);


int main()
{
    int n,i;
    cout<<"Up to which number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(prime(i))
        cout<<i<<endl;
    }
}

bool prime(int x)
{
    int k;
    for(k=2;k<=x/2;k++)
    {
        if(x%k==0)
        return false;
    }
    return true;
}
