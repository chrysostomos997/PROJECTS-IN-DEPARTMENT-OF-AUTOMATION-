#include <iostream>
using namespace std;

bool isprotos(int);
void grammi(int);//askhsh 2_1B


int main()
{
    int n,i;
    cout<<"mehri poion arithmo:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(isprotos(i))
          cout<<i<<endl;
        if(i%100==0)  //askhsh 2_1B
          grammi(i/100+1);//askhsh 2_1B
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

void grammi(int n) //askhsh 2_1B
{
    int i;
    for(i=1;i<=n;i++)
      cout<<'*';
    cout<<endl;
}
