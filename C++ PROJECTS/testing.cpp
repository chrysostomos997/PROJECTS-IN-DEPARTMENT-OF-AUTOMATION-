#include <iostream>
#include <cstring>
using namespace std;
void print(double *x,int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    cout<<i<<" : "<<x[i]<<endl;
}
double fun (double a,double &b,double *c)
{
    if (b>*c)
    *c=*c+40;
    else
    b=b+a;
    return(*c+b);
}
int main()
{
    double x,y=10,z=20,a[5]={2,5,6,8,3},*p;
    char cs[20];
    string s;
    int n1,n2,n,i;
    x=fun(13,y,&z);
    cout<<x<<" "<<z<<endl;
    print(a,5);

    cout<<"Give a text: ";
    cin>>cs;
    cout<<"Give secont text: ";
    cin>>s;
    n1=strlen(cs);
    n2=s.length();

    n=n1+n2;
    p=new double [n];
    for(i=0 ; i<n ; i++)
    p[i]=i*2;
    print(p,n);



}
