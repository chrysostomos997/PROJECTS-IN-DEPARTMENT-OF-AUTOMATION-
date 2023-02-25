#include <iostream>
#include <cstring>
using namespace std;
void emfanise (double *x,int n)
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
    emfanise(a,5);

    cout<<"Dose ena keimeno: ";
    cin>>cs;
    cout<<"Dose deutero keimeno: ";
    cin>>s;
    n1=strlen(cs);
    n2=s.length();

    n=n1+n2;
    p=new double [n];
    for(i=0 ; i<n ; i++)
    p[i]=i*2;
    emfanise(p,n);



}
