#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int a,b,c;
    char cha;
    cout<<"Dose charactira a :\n";
    cin>>cha;
    cout<<"\nCharactiras a="<<cha<<"\nKodikos ASCII a="<<int(cha);
    a=int(cha);
    for (int i=1; i<=3; i++)
    {
        if(a==74 || a==106)
        {
            cout<<"\nO charactiras cha einai to J h to j"<<endl;
        }
        else
        {
            cout<<"\nO charactiras cha dn einai to J h to j"<<endl;
        }
    }
    return 0;
}
