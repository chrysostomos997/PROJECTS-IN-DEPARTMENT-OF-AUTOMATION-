#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int k,a1,n,p,m;
    //a1(1o athroisma)
    double a2;
    //a2(2o athroisma)

    //1o meros
    cout<<"Mexri poio akeraio n? : ";
    cin>>n;
    a1=0;
    for(k=0 ; k<=n ; k+=2)
    {
        a1=a1+k;
    }

    //2o meros
    cout << "Mexri poio akeraio p? : ";
    cin>>p;
    a2=0;
    for (m=10; m<=p; m++)
    {
        a2=a2+(m/(m+3.));
    }
    cout <<"To 1o athroisma einai: "<<a1<<endl;
    cout <<"To 2o athroisma einai: "<<a2<<endl;
    return 0;
}


