#include<iostream>

using namespace std;

struct student
{
    string name;
    int am;
    double b;
};

student best(student [],int);

int main()
{
    int i,n;
    student *p,good;
    cout<<"How many students?: ";
    cin>>n;

    p=new student[n];
    for(i=0 ; i<n ; i++)
    {
        cout<<" \n Give data for: "<<i<<" student\n ";
        cout<<"Name :";
        cin>>p[i].name;
        cout<<"Registry number :";
        cin>>p[i].am;
        cout<<"Give grade :";
        cin>>p[i].b;
    }
    cout <<endl<<endl;
    for(i=0 ; i<n ; i++)
    {
        cout<<i<<" "<<p[i].name<<" "<<p[i].am<<" "<<p[i].b<<endl;
    }

    cout <<endl<<endl;
    good=best(p,n);

    cout<<"The best is : "<<good.name<<" with registry number : "<<good.am<<" and with grade: "<<good.b<<endl;

}


student best(student f[],int n)
{
    student t;
    t=f[0];
    for(int i=1; i<n; i++)
    {
        if(f[i].b > t.b)
            t=f[i];
    }
    return t;
}
