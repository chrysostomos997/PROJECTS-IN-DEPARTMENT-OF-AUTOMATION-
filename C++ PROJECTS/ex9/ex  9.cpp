#include <iostream>
using namespace std;


class foititis
{
    string onoma;
    int am;
    double b;

public:
    void eisodos();
    void eksodos();
    foititis (string s, int a,double v);
    foititis();
    foititis(string s,int a);
    foititis(string s);
    bool operator > (double);
    bool operator > (foititis);
    foititis operator + (double);



    friend double mesos(foititis[],int);
    friend foititis kalyteros (foititis[],int);


};
foititis foititis::operator + (double v)
{
    foititis t;
    t.b=b+v;
    t.onoma=onoma+"Petros";
    return t;
}
bool foititis:: operator > (foititis t)
{
    if (b>t.b)
        return true;
    else
        return false;
}
bool foititis::operator > (double r)
{
    if (b>r)
        return true;
    else
        return false;

}
void foititis::eisodos()

{
    cout<<"dose onoma: ";
    cin>>onoma;
    cout<<endl;
    cout<<"dose am: ";
    cin>>am;
    cout<<endl;
    cout<<"dose vathmo: ";
    cin>>b;
    cout<<endl;
}


void foititis :: eksodos()
{
    cout<<" onoma "<<onoma<<" am: "<<am<<" vathmos: "<<b<<endl;

}

//sinartisis domisis
foititis:: foititis (string s, int a ,double v)
{
    onoma=s;
    am=a;
    b=v;

}
foititis::foititis()
{



}

foititis::foititis(string s,int a)
{
    onoma=s;
    am=a;
    b=5;//an ithela den evaza tpt apla default tou leo ego opios aniki se autin tin katigoria perase me 5

}
foititis::foititis(string s)
{
    onoma=s;

}
//telos domisis

double  mesos (foititis x[],int n)
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

foititis kalyteros (foititis x[],int n)
{
    foititis t;
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

//------------------------------------------------main programma--------------------------------------------
int main ()
{
    foititis x("nikos", 1234, 5.6);
    foititis y("Yiannis");
    foititis z ;

    int i,n;
    cout<<"posoi foitites: ";
    cin>>n;
    foititis *p=new foititis[n];
    for(i=0; i<n; i++)
        p[i].eisodos();
    for(i=0; i<n; i++)
        p[i].eksodos();
    foititis best;
    best=kalyteros(p,n);
    cout<<"kalyteros einai o: ";
    best.eksodos();
    double mv;
    mv=mesos(p,n);
    cout<<"o mesos oros einai: "<<mv<<endl;
    if(x>5)
        cout<<"O foititis perna!";
    else
        cout<<"O foititis apetixe!";
    if(x>y)
        cout<<"\nO x megaliteros tou y!";
    else
        cout<<"\nO y megaliteros tou x!";
        cout<<endl;
    z=(x + 2);
    z.eksodos();


}

