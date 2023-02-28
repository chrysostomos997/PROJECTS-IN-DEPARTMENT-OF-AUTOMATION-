#include<iostream>
using namespace std;

void filled (int *x,int n);
void show (int *x,int n);
void Number_rounding ( int *x,int n);
int find(int *x,int n,int value);

int main ()
{
    int pl,value,position;
    cout<<"how many values?: ";
    cin>>pl;
    int *p=new int[pl];
    if(p==NULL)
    {
        cout<<"error memory!\n";
        return 1;
    }
    filled(p,pl);
    show(p,pl);
    cout<<"Which value?: ";
    cin>>value;
    position=find(p,pl,timi);
    if (position==-1)

        cout<<"Not exist\n";
    else
    {
        cout<<"Next value = ";
        cout<<p[position+1]<<endl;
    }
    cout << "\n=====Number_rounding=====\n";
    Number_rounding(p,pl);
    show (p,pl);

    delete []p;
}

void filled(int *x,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Give value for "<<i<<":";
        cin>>x[i];

    }
}
void show (int *x,int n)
{
    for (int i=0; i<n; i++)
        cout<<i<<":"<<x[i]<<endl;

}
int find( int *x,int n,int position)
{
    int i;
    for (i=0; i<n; i++)
        if (x[i]==position)
        {
            return i;
        }
    return -1;
}
void Number_rounding ( int *x,int n)
{
    int i;
    for (i=0; i<n; i++)
        x[i]=(x[i]+5)/10*10;
}
