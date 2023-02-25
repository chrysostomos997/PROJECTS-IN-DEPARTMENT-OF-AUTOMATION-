#include<iostream>
using namespace std;

struct foititis
{
    string onoma;
    int am;
    double b;
};
foititis kalyteros(foititis [],int);
//B1 erwthma
int poiospanw(foititis f[],int n,double v) //Euresh tou prwtou foititi pou h vathmologia tou einai panw apo mia timh
{
    for(int i=0; i<n; i++)
    {
        if(f[i].b > v)
            return i;
    }
    return -2;
}

int main()
{
    int i,n;
    foititis *p,kalos;
    cout<<"Posoi foitites?: ";
    cin>>n;

    p=new foititis [n];
    for(i=0 ; i<n ; i++)
    {
        cout<<" \n Dose dedomena gia: "<<i<<" foititi\n ";
        cout<<"Onoma :";
        cin>>p[i].onoma;
        cout<<"Arithos mitroou :";
        cin>>p[i].am;
        cout<<"Dose vathmo :";
        cin>>p[i].b;
    }
    cout <<endl<<endl;
    for(i=0 ; i<n ; i++)
    {
        cout<<i<<" "<<p[i].onoma<<" "<<p[i].am<<" "<<p[i].b<<endl;
    }

    cout <<endl<<endl;
    kalos=kalyteros(p,n);

    cout<<"O kaluteros einai o: "<<kalos.onoma<<" me arithmo mitrou : "<<kalos.am<<" kai bathmo: "<<kalos.b<<endl;
    //B1 erwthma
    i=poiospanw(p,n,9.1);
    if(i==-2)
        cout<<"Kanenas foititis den exei panw apo 9.1!"<<endl;
    else
        cout<<"O foititis pou exei panw apo 9.1 einai o :"<<p[i].onoma<<" me arithmo mitroou "<<p[i].am<<" kai bathmo "<<p[i].b<<endl;

}


foititis kalyteros(foititis f[],int n)
{
    foititis t;
    t=f[0];
    for(int i=1; i<n; i++)
    {
        if(f[i].b > t.b)
            t=f[i];
    }
    return t;
}

