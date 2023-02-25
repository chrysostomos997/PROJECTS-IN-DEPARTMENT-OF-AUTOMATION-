#include<iostream>
#define N 2
#include <iomanip>
using namespace std;
int main()
{
    int i,a[N],b[N],c[N];
    cout<<showpoint<<fixed<<setprecision(2);
    for(i=0 ; i<N ; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<endl;
    for(i=0 ; i<N ; i++)
    {
        cout<<"b["<<i<<"]: ";
        cin>>b[i];
    }
    cout<<endl;
    cout<<"a"<<"\tb"<<"\tc=a-b"<<endl;
    for(i=0 ; i<N ; i++)
    {
        c[i]=a[i]-b[i];
        cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<endl;
    }
    cout<<endl;
    cout<<"\na     :";
    for(i=0 ; i<N ; i++)
    {
    cout<<setw(8)<<a[i]<<"\t";
    }
    cout<<"\nb     :";
    for(i=0 ; i<N ; i++)
    {
        cout<<setw(8)<<b[i]<<"\t";
    }
    cout<<"\nc=a-b :";
     for(i=0 ; i<N ; i++)
     {
         cout<<setw(8)<<c[i]<<"\t";
     }













}























