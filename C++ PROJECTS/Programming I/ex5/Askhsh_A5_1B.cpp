#include<iostream>
#include<iomanip>
#define N 5
using namespace std;
int main()
{
    double a[N],max=0,min=999999,sum=0,mo;
    int thesh_min=0,thesh_max=0,n=0,i;
    for(i=0 ; i<N ; i++)
    {
        cout<<"Dose timh gia to stoixeio a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<showpoint<<fixed<<setprecision(1);
    for(i=0 ; i<N ; i++)
    {
        cout<<"To stoixeio "<<i<<" einai: "<<setw(7)<<a[i]<<endl;
    }
    for(i=0 ; i<N ; i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            thesh_min=i;

        }
        else
        {
            if(a[i]>=max)
            {
                max=a[i];
                thesh_max=i;
            }
        }
    }
    cout<<setw(7)<<"H megaliterh timh tou pinaka einai h "<<max<<endl;
    cout<<"H megaliterh timh vriskete stn thesh: "<<thesh_max<<endl;
    cout<<setw(7)<<"H mikroterh timh tou pinaka einai h "<<min<<endl;
    cout<<"H mikroterh timh vriskete stn thesh: "<<thesh_min<<endl;
    for(i=0 ; i<N ; i++)
    {
        if(a[i]>5)
        {
            sum=sum+a[i];
            n++;
        }
    }
    if(n>0)
    {
        mo=sum/n;
        cout<<"o mesos oros einai mo="<<mo<<endl;
    }
    else
    {

        cout<<"O mo einai arnitikos"<<endl;
    }


    return 0;
}

