#include<iostream>
#include<cmath>
using namespace std;
void calculation(double R,double L,double C,double W,double *Z,double *Wr);

int main()
{
    double R,L,C,W,Z,Wr;
    cout<<"GIVE R :";
    cin>>R;
    cout<<"GIVE L :";
    cin>>L;
    cout<<"GIVE C :";
    cin>>C;
    cout<<"GIVE W :";
    cin>>W;
    calculation(R,L,C,W,&Z,&Wr);

    cout<<"composite resistance ="<<Z<<endl;
    cout<<"tuning frequency ="<<Wr<<endl;
}

void calculation(double R,double L,double C,double W,double *Z,double *Wr)
{
    double XL,XC;

    *Wr=sqrt(1/(L*C));

    XL=W*L;
    XC=1/(W*C);

    *Z=sqrt(R*R+(XL-XC)*(XL-XC));
}
