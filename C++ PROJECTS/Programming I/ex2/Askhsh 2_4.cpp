#include<iostream>
using namespace std;
#include<iomanip>
int main ()
{
    int a,b,c;
    char cha,chb;
    cout<<"Dose charactira a:\n";
    cin>>cha;
    cout<<"\n Charaktiras = "<<cha<<"\n kodikos ASCII = "<<int(cha)<<"\n";
    cout<<"Dose charactira b :\n";
    cin>>chb;
    cout<<"\n Charaktiras = "<<chb<<"\n kodikos ASCII = "<<int(chb)<<"\n";
    c=cha-chb;
    cout<<"H akeraia diafora twn kodikwn twn dio xaraktirwn einai = " <<c<<""<<endl;
  return 0;
}
