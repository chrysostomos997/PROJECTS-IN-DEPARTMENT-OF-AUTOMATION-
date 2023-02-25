#include <iostream>
using namespace std;
bool protos(int );
void grammi (int);
int main()
{
    int n;
    cout<<"Mexri pio akaraio n?: ";
    cin>>n;
    for(int i=1 ; i<=n ;i++)
    {
        if(protos(i))
        cout<<i<<endl;
        if(i%100==0)
        {
           grammi(i/100);
           cout<<endl;
        }

    }
}
bool protos(int n)
{
    int i;
    for(i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
void grammi(int n)
{
    for(int i=1 ; i<=n ; i++)
    cout<<'*';
}
