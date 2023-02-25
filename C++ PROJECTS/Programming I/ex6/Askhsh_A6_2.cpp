#include<iostream>
#include<cctype>
#include<cstring>
#include<iomanip>
using namespace std;
int main ()
{
    char s[20],c;
    int i=0,k,max=0,sum=0,h=-1,n;
    double mo=0;
    cout<<"Dose tn simvolosira s: ";
    cin>>s;
    //cin.getline(s,20);
    while(s[i] != '\0')
    {
        k=i;
        i++;
    }
    cout<<"\n To mikos tis simvolosiras einai: "<<k<<" charaktires"<<endl;
    for(int i=0 ; i<k ; i++)
    {
        if(s[i]>max)
        {
            max=i;
        }
    }
    cout<<"\nH megaliterh timh vrethike stn thesh: "<<max<<endl;
    for(int i=0 ; i<k ; i++)
    {
        if(s[i]>5)
        {
            sum=sum+s[i];
            n++;
        }
    }
    mo=sum/n;
    cout<<"O mesos oros twn stoixeiwn >5 einai: "<<mo<<endl;
    //b part
    cout<<"\nDose charaktira c: ";
    cin>>c;
    for(int i=0 ; i<k ; i++)
    {
        while(int(c)!=s[i])
        {
            h++;
        }
    }
    cout<<"O charaktiras vrethike stn thesh: "<<h<<endl;
    //c part
    for(int i=0 ; i<k ; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            s[i]='@';
            c=int(s[i]);
            cout<<c;
        }
    }
    cout<<endl;

    return 0;
}




