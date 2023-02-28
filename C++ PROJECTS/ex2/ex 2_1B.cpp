#include <iostream>
using namespace std;

bool prime(int);
void line(int);//ex 2_1B


int main()
{
    int n,i;
    cout<<"Up to which number?:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(prime(i))
          cout<<i<<endl;
        if(i%100==0)  //ex 2_1B
          line(i/100+1);//ex 2_1B
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

void line(int n) //ex 2_1B
{
    int i;
    for(i=1;i<=n;i++)
      cout<<'*';
    cout<<endl;
}
