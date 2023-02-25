#include <iostream>
using namespace std;
class orthpar
{
    double a,b;
public:
    void deikse()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    orthpar(double,double);
    orthpar(double);
    orthpar();
    //telestes sigkriseis
    bool operator==(orthpar);
    bool operator > (double);
    bool operator >  (orthpar);
    //telestes prosthesis
    orthpar operator + (orthpar);
    orthpar operator + (double);
    friend orthpar operator + (double d,orthpar x);
    double emvadon()
    {
        return a*b;
    }
};
int main()
{
    orthpar p1(10,20),p2(3,4),p3,p4(9),p5;
    if(p1==p2)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
    if(p1>1000)
        cout<<"megalo"<<endl;
    else
        cout<<"mikro"<<endl;
    if(p1>p2)
        cout<<"megalitero to p1\n";
    else
        cout<<"megalitero to p2\n";
    p5=p1+p2;
    p5.deikse();
    (p2+p4).deikse();
    p5=p1+5;
    p5.deikse();
    p3=8+p1;
    p3.deikse();
}
orthpar::orthpar(double x,double y)
{
    a=x;
    b=y;
}
orthpar::orthpar(double x)
{
    a=x;
    b=x;
}
orthpar::orthpar()
{
    a=0;
    b=0;
}
bool orthpar::operator ==(orthpar x)
{
    if(a==x.a && b==x.b)
        return true;
    else
        return false;
}
bool orthpar::operator > (double e)
{
    if (emvadon()>e)
        return true;
    else
        return false;
}
bool orthpar::operator > (orthpar x)
{
    if(emvadon()>x.emvadon())
        return true;
    else
        return false;
}
orthpar orthpar::operator + (orthpar x)
{
    orthpar t;
    t.a=a+x.a;
    t.b=b+x.b;
    return t;
}
orthpar orthpar:: operator + (double d)
{
    orthpar t;
    t.a=a+d;
    t.b=b+d;
    return t;
}
orthpar operator + (double d,orthpar x)
{
    orthpar t;
    t.a=d+x.a;
    t.b=d+x.b;
    return t;
}




























