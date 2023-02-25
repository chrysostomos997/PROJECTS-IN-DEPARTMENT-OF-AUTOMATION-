#include<iostream>
using namespace std;
#include<iomanip>
int main ()
{
    int ha,ma,ht,mt,haf,maf;
    char ch;
    cout<<"Dose wra kai lepta anaxwrishs:";
    cin>>ha>>ch>>ma;
    cout<<"Dose wra kai lepta taxidiou:";
    cin>>ht>>ch>>mt;
    maf=(ma+mt)%60;
    haf=ha+ht+(ma+mt)/60;
    if(haf>=24)
    {
        cout<<"Afiksh tn epomenh mera\n";
        haf=haf-24;
    }
    cout<<setfill('0');
    cout<<"Afiksh stis:"<<setw(2)<<haf<<":"<<setw(2)<<maf<<endl;
    return 0;
}
