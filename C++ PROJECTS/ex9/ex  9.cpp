#include <iostream>
using namespace std;


class student
{
    string name;
    int am;
    double b;

public:
    void entrance();
    void exit();
    student (string s, int a,double v);
    student();
    student(string s,int a);
    student(string s);
    bool operator > (double);
    bool operator > (student);
    student operator + (double);



    friend double medium(student[],int);
    friend student best (student[],int);


};
student student::operator + (double v)
{
    student t;
    t.b=b+v;
    t.name=name+"Petros";
    return t;
}
bool student:: operator > (student t)
{
    if (b>t.b)
        return true;
    else
        return false;
}
bool student::operator > (double r)
{
    if (b>r)
        return true;
    else
        return false;

}
void student::entrance()

{
    cout<<"give name: ";
    cin>>name;
    cout<<endl;
    cout<<"give registry number: ";
    cin>>am;
    cout<<endl;
    cout<<"give grade: ";
    cin>>b;
    cout<<endl;
}


void student :: exit()
{
    cout<<" name "<<name<<" registry number:  "<<am<<" grade: "<<b<<endl;

}


student:: student (string s, int a ,double v)
{
    name=s;
    am=a;
    b=v;

}
student::student()
{



}

student::student(string s,int a)
{
   name=s;
    am=a;
    b=5;

}
student::student(string s)
{
   name=s;

}


double  medium (student x[],int n)
{
    double m,s;
    s=0;
    for(int i=0; i<n; i++)
    {
        s=x[i].b+s;
    }


    m=s/n;

    return m;

}

student best(student x[],int n)
{
   student t;
    t=x[0];
    for (int i=0; i<n; i++)
    {
        if(x[i].b>t.b)
        {
            t=x[i];
            return t;
        }

    }
}

int main ()
{
   student x("nikos", 1234, 5.6);
    student y("Yiannis");
   student z ;

    int i,n;
    cout<<"How many students: ";
    cin>>n;
    student *p=new student[n];
    for(i=0; i<n; i++)
        p[i].entrance();
    for(i=0; i<n; i++)
        p[i].exit();
    student best;
    best=best(p,n);
    cout<<"Best is : ";
    best.exit();
    double mv;
    mv=medium(p,n);
    cout<<"average: "<<mv<<endl;
    if(x>5)
        cout<<"student pass!";
    else
        cout<<"student failed!";
    if(x>y)
        cout<<"\n x bigger than y!";
    else
        cout<<"\n y bigger than x!";
        cout<<endl;
    z=(x + 2);
    z.exit();


}

