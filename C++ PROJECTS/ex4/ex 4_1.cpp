#include <iostream>
using namespace std;
void gemise(int *x,int n);
void  deikse(int *x,int n);
int psakse(int *x,int n,int timi);
void strogilopoiise(int *x,int n);

int main()
{
    int pl,timi,thesi;
    cout<<"poses times? ";
    cin>>pl;
    int *p=new int[pl];
    if(p==NULL)
    {
        cout<<"Mi efikth desmeush mnhmhs:";
        return 1;
    }
    gemise(p,pl);
    deikse(p,pl);
    cout<<"poia timi?";
    cin>>timi;
    thesi=psakse(p,pl,timi);
    if(thesi==-1)
      cout<<"den yparxei:";
    else
      cout<<"epomenes times="<<p[thesi+1]<<"  "<<p[thesi+2]<<endl;
  cout<<"strogilopoiish\n";
  strogilopoiise(p,pl);
  deikse(p,pl);

  delete []p;

}

void gemise(int *x,int n)
{
    for(int i=0;i<n;i++)
    {
      cout<<"dose timi gia:"<<i<<":";
      cin>>x[i];
    }
}

void deikse(int *x,int n)
{
    for(int i=0;i<n;i++)
    cout<<i<<":"<<x[i]<<endl;
}

int psakse(int *x,int n,int timi)
{
    int i;
    for(i=0;i<n;i++)

        if(x[i]==timi)
        {
           return i;
        }
  return -1;

}

void strogilopoiise(int *x,int n)
{
    int i;
    for(i=0;i<n;i++)
      x[i]=(x[i]+5)/10*10;
}
