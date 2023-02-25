#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    int i;
    double ak,n,ep,tp,p;
    // p=poso,tp=teliko poso,n=xronia
    //ep=epitokio,ak=arxiko kefalaio

    //1o meros
    cout << "Dose arxiko kefalaio: ";
    cin>>ak;
    cout<<"Dose meta apo posa xronia: ";
    cin>>n;
    cout<<"Dose etisio epitokio: ";
    cin>>ep;
    tp = ((ep/100)*ak)*n+ak;

    //2o meros
    for (i=1 ; i<=n ; i+=1)
    {
      p=((ep/100)*ak)*i+ak;
      cout << "Ton " << i << "o xrono";
      cout << " to poso tha einai: " <<p<<endl;
    }
    cout<< "To teliko poso tha einai: "<<tp<<endl;
   return 0;
}
