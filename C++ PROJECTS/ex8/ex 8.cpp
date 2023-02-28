#include <iostream>
using namespace std;

class student
{
    string name;
    int am;
    double b;
public :
        void entrance();
        void exit();
        friend student best(student *p,int n);

    bool bigger(double);

    bool bigger(student);
};

void student::entrance()
{
    cout<<"Give name: ";
    cin>>name;
    cout<<endl;
    cout<<"Give registry number: ";
    cin>>am;
    cout<<endl;
    cout<<"Give grade: ";
    cin>>b;
    cout<<endl;
}

void student::exit()
{
   cout<<" name: "<<name<<" registry number: "<<am<<" grade: "<<b<<endl;
}

student best(student *p,int n)
{
    student t;
    t=p[0];
    for (int k=1; k<n; k++)
    {
        if(p[k].b>t.b)
        {
            t=p[k];
            return t;
        }
    }
}
bool student::bigger(double v)
{
    if (b>v)
        return true;
    else
        return false;
}
bool student::bigger(student f)
{
    if(b>f.b)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout<<"How many students? : ";
    cin>>n;
    student *p=new student[n];

    for(int i=0;i<n;i++)
    {
        p[i].entrance();
    }
    for(int i=0;i<n;i++)
    {
        p[i].exit();
    }
    student best;
    best=best(p,n);
    cout<<"best is :  ";
    best.exit();
    cout<<endl;
   
   student x;
    x.entrance();
    double v=4.5;
    if(x.bigger(v))
        cout<<"access"<<endl;
   
    if(x.bigger(best))
    {
        cout<<"best of all: ";
        x.exit();

    }
    else
    {
        cout<<"best of all  ";
        best.exit();
    }
}
