#include<iostream>
using namespace std;

void conversion(int second,int &h,int &m,int &s);


int main()
{
    int ts,h,m,s;
    cout<<"Duration:";
    cin>>ts;
    conversion(ts,h,m,s);
    cout<<h<<":"<<m<<":"<<s<<endl;
}

void conversion(int second,int &h,int &m,int &s)
{
    h=second/3600;
    m=second%3600/60;
    s=second%3600%60;

   return;
}
