#include<iostream>
using namespace std;

struct student		
{
    string name;
    int am;
    double b;
};

student best(student [],int);
int p(student[],int,double);
                                    
void search(student [],int,string);
                                      
                                      
void classification(student f[],int n)
{
    student t;
    t=f[0];
    for(int i=0 ; i<n ;i++)
    {
        if(f[i].b>t.b)
        t=f[i];
    }
    cout<<""
}


int main()
{
    int i,n;
    cout<<"How many students? ";
    cin>>n;
    student *p;
    p=new student [n];
    for(i=0;i<n;i++)
    {
        cout<<" \n Give data for: "<<i<<" student\n ";
        cout<<"name :";
        cin>>p[i].name;
        cout<<"registry number :";
        cin>>p[i].am;
        cout<<" grade :";
        cin>>p[i].b;
    }
    cout <<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i<<" "<<p[i].name<<" "<<p[i].am<<" "<<p[i].b<<endl;
    }

    cout <<endl<<endl;
    student good,taks,tak;
    good=best(p,n);

    cout<<"Name of the best : "<<good.name<<" registry number : "<<good.am<<" grade: "<<good.b<<endl;

 
    i=p(p,n,9.1);
    if(i==-1)
      cout<<"no one has bigger than 9.1:"<<endl;
    else
      cout<<"the student that has bigger than 9.1 is:"<<p[i].name<<" with registry number "<<p[i].am<<" and grade "<<p[i].b<<endl;


      find(p,n,name);

       string name;
       cout<<"Who you are looking for ?";
       cin>>name;

      
    for(int i=0; i <n ;i++)
    cout<<"Name= "<<f[i].name<<"\tAm= "<<f[i].am<<"\tGrade= "<<f[i].b<<endl;

    taks=best(p,n);
    cout<<taks.name<<taks.am<<taks.b<<endl;

    tak=best(p-taks,n);





}


student best(student f[],int n)
{
    student t;
    t=f[0];
    for(int i=1;i<n;i++)
    {
        if(f[i].b>t.b)
        t=f[i];
    }
    return t;
}


int p(student f[],int n,double v)
{
    for(int i=0;i<n;i++)
    {
        if(f[i].b>v)
        return i;
    }
    return -1;
}


void find(student f[],int n,string name)
{
    int k=0;
    for(int i=0;i<n;i++)
      if(f[i].name==name)
      {
          cout<<f[i].name<<" "<<f[i].am<<" "<<f[i].b<<endl;
          k++;
      }
      if(k==0)
      cout<<"no one";
      cout<<endl;
}
