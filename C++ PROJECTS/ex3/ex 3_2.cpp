#include<iostream>
#include<cmath>
using namespace std;
void ypologismos(double R,double L,double C,double W,double *Z,double *Wr);

int main()
{
    double R,L,C,W,Z,Wr;
    cout<<"Dose R :";
    cin>>R;
    cout<<"Dose L :";
    cin>>L;
    cout<<"Dose C :";
    cin>>C;
    cout<<"Dose W :";
    cin>>W;
    ypologismos(R,L,C,W,&Z,&Wr);

    cout<<"sintheth antistash ="<<Z<<endl;
    cout<<"syhnotita suntonismou ="<<Wr<<endl;
}

void ypologismos(double R,double L,double C,double W,double *Z,double *Wr)
{
    double XL,XC;

    *Wr=sqrt(1/(L*C));

    XL=W*L;
    XC=1/(W*C);

    *Z=sqrt(R*R+(XL-XC)*(XL-XC));
}
