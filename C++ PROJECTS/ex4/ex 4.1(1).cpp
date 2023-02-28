#include <iostream>
#include <cmath>
using namespace std;
void filled (double x[], int n);
void print (const double x[], int n);
int find (double x[], int n, double s);


int main ()
{

    int n, s;
    cout<<"size: ";
    cin>>n;
    double *p=new double [n];
    filled  (p,n);
    print (p,n);
    cout<<"What number you are looking for?"<<endl;
    cin>>s;
    int k=find(p,n,s);
    if (k==-1)
    cout<<"Not exist";
    else
    cout<<"Exist:"<<p[k+1];

}
void filled (double x[], int n)
{
    for (int i=0; i<n; i++)
    cin>>x[i];
}

void print (const double x[], int n)
{
    for (int i=0; i<n; i++)
    cout<<x[i];
}

int find (double x[], int n, double s)
{
    for (int i=0; i<n; i++)
    {
        if (abs(s-x[i])<0.00001)
        return i;
    }
        return -1;


}
