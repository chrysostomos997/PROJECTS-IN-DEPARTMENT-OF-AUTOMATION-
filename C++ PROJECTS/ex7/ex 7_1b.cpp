#include<iostream>
using namespace std;

struct foititis
{
    string onoma;
    int am;
    double b;
};

foititis kalyteros(foititis [],int);
int poiospanw(foititis[],int,double);//euresh tou prwtou foititi pou h vathmologia
                                     //tou einai panw apo mia timh
void anazitisi(foititis [],int,string);//anazhthsh onomatos
                                       //(vriskei kai tiponi ekeinous tous foitites
                                       //pou exoun idio onoma me mia sumbolosira
                                       //pou tha tis dinete os prostheti parametros)
void taksinomoish(foititis f[],int n)
{
    foititis t;
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
    cout<<"posoi foitites? ";
    cin>>n;
    foititis *p;
    p=new foititis [n];
    for(i=0;i<n;i++)
    {
        cout<<" \n dose dedomena gia: "<<i<<" foititi\n ";
        cout<<"onoma :";
        cin>>p[i].onoma;
        cout<<"arithmo mitroou :";
        cin>>p[i].am;
        cout<<" vathmo :";
        cin>>p[i].b;
    }
    cout <<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i<<" "<<p[i].onoma<<" "<<p[i].am<<" "<<p[i].b<<endl;
    }

    cout <<endl<<endl;
    foititis kalos,taks,tak;
    kalos=kalyteros(p,n);

    cout<<"to onoma tou kaluterou einai: "<<kalos.onoma<<" o arithmos mitroou tou einai : "<<kalos.am<<" kai o vathmos einai: "<<kalos.b<<endl;

   //b1 erwthma
    i=poiospanw(p,n,9.1);
    if(i==-1)
      cout<<"kanenas foititis den exei panw apo 9.1:"<<endl;
    else
      cout<<"o foititis pou exei panw apo 9.1 einai:"<<p[i].onoma<<" me arithmo mitroou "<<p[i].am<<" kai me vathmo "<<p[i].b<<endl;

     //b2 erwthma
      anazitisi(p,n,name);

       string name;
       cout<<"poion psaxneis ?";
       cin>>name;

       //b3 erwthma
    for(int i=0; i <n ;i++)
    cout<<"Onoma= "<<f[i].onoma<<"\tAm= "<<f[i].am<<"\tBathmos= "<<f[i].b<<endl;

    taks=kalyteros(p,n);
    cout<<taks.onoma<<taks.am<<taks.b<<endl;

    tak=kalyteros(p-taks,n);





}


foititis kalyteros(foititis f[],int n)
{
    foititis t;
    t=f[0];
    for(int i=1;i<n;i++)
    {
        if(f[i].b>t.b)
        t=f[i];
    }
    return t;
}

//b meros orismos synarthshs

// b1
int poiospanw(foititis f[],int n,double v)
{
    for(int i=0;i<n;i++)
    {
        if(f[i].b>v)
        return i;
    }
    return -1;
}

// b2
void anazitisi(foititis f[],int n,string name)
{
    int k=0;
    for(int i=0;i<n;i++)
      if(f[i].onoma==name)
      {
          cout<<f[i].onoma<<" "<<f[i].am<<" "<<f[i].b<<endl;
          k++;
      }
      if(k==0)
      cout<<"kanenas";
      cout<<endl;
}
