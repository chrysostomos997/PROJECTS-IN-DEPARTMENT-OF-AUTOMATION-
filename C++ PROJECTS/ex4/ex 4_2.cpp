#include<iostream>
using namespace std;

void gemise (int *x,int n);
void deikse (int *x,int n);
void strogilopoiise ( int *x,int n);
int psakse(int *x,int n,int timi);

int main ()
{
    int pl,timi,thesi;
    cout<<"Poses times?: ";
    cin>>pl;
    int *p=new int[pl];
    if(p==NULL)
    {
        cout<<"Mi efikti desmeusi mnimis!\n";
        return 1;
    }
    gemise(p,pl);
    deikse(p,pl);
    cout<<"Poia timi?: ";
    cin>>timi;
    thesi=psakse(p,pl,timi);
    if (thesi==-1)

        cout<<"Den iparxei\n";
    else
    {
        cout<<"Epomenh timh = ";
        cout<<p[thesi+1]<<endl;
    }
    cout << "\n=====STROGKILOPOIHSH=====\n";
    strogilopoiise(p,pl);
    deikse (p,pl);

    delete []p;
}

void gemise(int *x,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Dose timi gia "<<i<<":";
        cin>>x[i];

    }
}
void deikse (int *x,int n)
{
    for (int i=0; i<n; i++)
        cout<<i<<":"<<x[i]<<endl;

}
int psakse ( int *x,int n,int timi)
{
    int i;
    for (i=0; i<n; i++)
        if (x[i]==timi)
        {
            return i;
        }
    return -1;
}
void strogilopoiise ( int *x,int n)
{
    int i;
    for (i=0; i<n; i++)
        x[i]=(x[i]+5)/10*10;
}
