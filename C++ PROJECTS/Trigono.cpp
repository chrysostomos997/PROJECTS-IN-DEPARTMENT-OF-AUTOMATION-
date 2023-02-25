#include <iostream>
using namespace std;
class trigono
{
    double a,b,c;
public :
    trigono(double x,double y,double z)
    {
        a=x;
        b=y;
        c=z;
    }
    trigono()
    {

    }
    double perimetros();
    bool isopleuro();
    void diavase();
    friend double athroisma(trigono x[],int n);
};
double trigono::perimetros()
{
    double p;
    p=a+b+c;
    return p;
}
bool trigono::isopleuro()
{
    if(a==b && b==c)
        return true;
    else
        return false;
}
void trigono::diavase()
{
    cout<<"Dose pleures trigonou: ";
    cin>>a>>b>>c;
}
double athroisma(trigono x[],int n)
{
    double s=0;
    for(int k=0 ; k<n ; k++)
        s=s+x[k].perimetros();
    return s;
}
int main()
{
    int n;
    trigono t1(5,6,7),t2(6,6,4),t3(8,8,8);
    if(t1.isopleuro())
        cout<<"Einai isopleuro\n";
    else
        cout<<"Den einai!\n";
    cout<<"Perimetros t2 ="<<t2.perimetros()<<endl;
    if(t1.perimetros()>t3.perimetros())
        cout<<"t1 megalitero apo t3\n";
    else
        cout<<"t3 megalitero apo t1\n";
    cout<<"Dose arithmo trigwnwn ";
    cin>>n;
    trigono *p=new trigono[n];
    for(int i=0 ; i <n ; i++)
        p[i].diavase();
    double athrper;
    athrper=athroisma(p,n);
    cout<<"Athroisma perimetrwn= "<<athrper<<endl;





}
