#include <iostream>
using namespace std;
void filled(int *x,int n);
void  show(int *x,int n);
int find(int *x,int n,int value);
void Number_rounding(int *x,int n);

int main()
{
    int pl,value,position;
    cout<<"How many t? ";
    cin>>pl;
    int *p=new int[pl];
    if(p==NULL)
    {
        cout<<"error memory";
        return 1;
    }
    filled(p,pl);
    show(p,pl);
    cout<<"which value?";
    cin>>value;
    position=find(p,pl,value);
    if(position==-1)
      cout<<"not exist:";
    else
      cout<<"next values="<<p[position+1]<<"  "<<p[position+2]<<endl;
  cout<<"Number rounding\n";
  Number_rounding(p,pl);
  show(p,pl);

  delete []p;

}

void filled(int *x,int n)
{
    for(int i=0;i<n;i++)
    {
      cout<<"give value for:"<<i<<":";
      cin>>x[i];
    }
}

void show(int *x,int n)
{
    for(int i=0;i<n;i++)
    cout<<i<<":"<<x[i]<<endl;
}

int find(int *x,int n,int value)
{
    int i;
    for(i=0;i<n;i++)

        if(x[i]==value)
        {
           return i;
        }
  return -1;

}

void Number_rounding(int *x,int n)
{
    int i;
    for(i=0;i<n;i++)
      x[i]=(x[i]+5)/10*10;
}
