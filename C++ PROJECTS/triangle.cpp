#include <iostream>
using namespace std;
class triangle
{
    double a,b,c;
public :
    triangle(double x,double y,double z)
    {
        a=x;
        b=y;
        c=z;
    }
    triangle()
    {

    }
    double perimeter();
    bool equilateral();
    void read();
    friend double sum(triangle x[],int n);
};
double triangle::perimeter()
{
    double p;
    p=a+b+c;
    return p;
}
bool triangle::equilateral()
{
    if(a==b && b==c)
        return true;
    else
        return false;
}
void triangle::read()
{
    cout<<"Give triangle sides: ";
    cin>>a>>b>>c;
}
double sum(triangle x[],int n)
{
    double s=0;
    for(int k=0 ; k<n ; k++)
        s=s+x[k].perimeter();
    return s;
}
int main()
{
    int n;
    triangle t1(5,6,7),t2(6,6,4),t3(8,8,8);
    if(t1.equilateral())
        cout<<"It is equilateral\n";
    else
        cout<<"It isnt!\n";
    cout<<"Perimeter t2 ="<<t2.Perimeter()<<endl;
    if(t1.Perimeter()>t3.Perimeter())
        cout<<"t1 bigger than t3\n";
    else
        cout<<"t3 bigger than t1\n";
    cout<<"Give number of triangles: ";
    cin>>n;
    triangle *p=new triangle[n];
    for(int i=0 ; i <n ; i++)
        p[i].read();
    double sumper;
    sumper=sum(p,n);
    cout<<"Sum of Per= "<<sumper<<endl;





}
