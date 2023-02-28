#include <iostream>
using namespace std;
class rectangle
{
    double a,b;
public:
    void show()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    rectangle(double,double);
    rectangle(double);
    rectangle();
    //comparison operators
    bool operator==(rectangle);
    bool operator > (double);
    bool operator >  (rectangle);
    //telestes prosthesis
    rectangle operator + (rectangle);
    rectangle operator + (double);
    friend rectangle operator + (double d,rectangle x);
    double area()
    {
        return a*b;
    }
};
int main()
{
    rectangle p1(10,20),p2(3,4),p3,p4(9),p5;
    if(p1==p2)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
    if(p1>1000)
        cout<<"big"<<endl;
    else
        cout<<"small"<<endl;
    if(p1>p2)
        cout<<"bigger than p1\n";
    else
        cout<<"bigger than p2\n";
    p5=p1+p2;
    p5.deikse();
    (p2+p4).deikse();
    p5=p1+5;
    p5.deikse();
    p3=8+p1;
    p3.show();
}
rectangle::rectangle(double x,double y)
{
    a=x;
    b=y;
}
rectangle::rectangle(double x)
{
    a=x;
    b=x;
}
orthpar::orthpar()
{
    a=0;
    b=0;
}
bool rectangle::operator ==(rectangle x)
{
    if(a==x.a && b==x.b)
        return true;
    else
        return false;
}
bool rectangle::operator > (double e)
{
    if (emvadon()>e)
        return true;
    else
        return false;
}
bool rectangle::operator > (rectangle x)
{
    if(area()>x.area())
        return true;
    else
        return false;
}
rectangle rectangle::operator + (rectangle x)
{
    rectangle t;
    t.a=a+x.a;
    t.b=b+x.b;
    return t;
}
rectangle rectangle:: operator + (double d)
{
    rectangle t;
    t.a=a+d;
    t.b=b+d;
    return t;
}
rectangle rectangle + (double d,rectangle x)
{
   rectangle t;
    t.a=d+x.a;
    t.b=d+x.b;
    return t;
}




























