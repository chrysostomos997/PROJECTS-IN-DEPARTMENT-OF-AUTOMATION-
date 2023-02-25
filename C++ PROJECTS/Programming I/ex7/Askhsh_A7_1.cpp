#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    string onoma,onomax,s,frash;
    int ilikia,sum=0,pl=0,plithos=0;;
    float mo;
    ifstream fin("onomata.txt");
    ofstream fout("anazitisi.txt");
    if(fin.fail())
    {
        cout<<"Error sto arxeio eisodou!";
        return 1;
    }
    int plit=0,k;

    cout<<"Dose onoma: ";
    cin>>onomax;
    cout<<"Dose frash: ";
    cin>>frash;
    fin>>onoma>>ilikia;

    while(!fin.eof())
    {

        cout<<onoma<<"\t"<<ilikia;
        sum=sum+ilikia;
        fin>>onoma>>ilikia;
        cout<<endl;
        k=onoma.find(frash);
        if(k==-1)
            cout<<"Dn iparxei i frash sto onoma!"<<endl;
        else
        {
            s=onoma;
            fout<<s<<"\t";
            plit++;
        }
        if(onomax==onoma)
        {
            fout<<onoma<<"\t"<<ilikia<<endl;
            plithos++;
        }
        pl++;
    }
    mo=sum/pl;
    cout<<"Athroisma: "<<sum<<endl;
    cout<<"O mesos oros ilikias einai: "<<mo<<endl;
    cout<<plithos<<" Lekseis graftikan sto arxeio eksodou"<<endl;
    cout<<plit<<" Lekseis sigkolithikan"<<endl;
    fin.close();
    fout.close();
}














