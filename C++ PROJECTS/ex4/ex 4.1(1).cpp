#include <iostream>
#include <cmath>
using namespace std;
void gemise (double x[], int n);
void typose (const double x[], int n);
int psakse (double x[], int n, double s);


int main ()
{

    int n, s;
    cout<<"Dwse megethos pinakas";
    cin>>n;
    double *p=new double [n];
    gemise (p,n);
    typose (p,n);
    cout<<"Dwse arithmo pou psaxneis"<<endl;
    cin>>s;
    int k=psakse(p,n,s);
    if (k==-1)
    cout<<"den yparxei";
    else
    cout<<"yparxei:"<<p[k+1];

}
void gemise (double x[], int n)
{
    for (int i=0; i<n; i++)
    cin>>x[i];
}

void typose (const double x[], int n)
{
    for (int i=0; i<n; i++)
    cout<<x[i];
}

int psakse (double x[], int n, double s)
{
    for (int i=0; i<n; i++)
    {
        if (abs(s-x[i])<0.00001)
        return i;
    }
        return -1;


}
