#include <iostream>
using namespace std;

class foititis
{
    string onoma;
    int am;
    double b;
public :
        void eisodos();
        void eksodos();
        friend foititis kalyteros(foititis *p,int n);
//b1 meros
    bool bigger(double);
//b2 meros
    bool bigger(foititis);
};

void foititis::eisodos()
{
    cout<<"dose onoma foititi: ";
    cin>>onoma;
    cout<<endl;
    cout<<"dose am foititi: ";
    cin>>am;
    cout<<endl;
    cout<<"dose vathmo foititi: ";
    cin>>b;
    cout<<endl;
}

void foititis::eksodos()
{
   cout<<" onoma: "<<onoma<<" am: "<<am<<" vathmos: "<<b<<endl;
}

foititis kalyteros(foititis *p,int n)
{
    foititis t;
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
bool foititis::bigger(double v)
{
    if (b>v)
        return true;
    else
        return false;
}
bool foititis::bigger(foititis f)
{
    if(b>f.b)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout<<"posoi foithtes? : ";
    cin>>n;
    foititis *p=new foititis[n];

    for(int i=0;i<n;i++)
    {
        p[i].eisodos();
    }
    for(int i=0;i<n;i++)
    {
        p[i].eksodos();
    }
    foititis best;
    best=kalyteros(p,n);
    cout<<"o kaluteros einai:  ";
    best.eksodos();
    cout<<endl;
    //b1 meros
    foititis x;
    x.eisodos();
    double v=4.5;
    if(x.bigger(v))
        cout<<"perna"<<endl;
    //b2 meros
    if(x.bigger(best))
    {
        cout<<"o kaluteros apo olous einai: ";
        x.eksodos();

    }
    else
    {
        cout<<"o kaluteros apo olous einai  ";
        best.eksodos();
    }
}
