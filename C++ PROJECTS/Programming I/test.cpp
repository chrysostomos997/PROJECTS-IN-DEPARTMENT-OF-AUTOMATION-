#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    int i,n;
    float l,w,eplak,sum=0;
    cout<<"Dose arithmo plakidiwn: ";
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        do
        {
            cout<<"Dose mikos L plakidiou "<<i<<" se cm: ";
            cin>>l;
            cout<<"Dose platos W plakidiou "<<i<<" se cm: ";
            cin>>w;

            eplak=(l*w)/10000;
            cout<<"To emvadon tou plakidiou "<<i<<" se cm2 einai:"<<eplak<<endl;
            if(l<0 || w<0 || l>50 && w>0)
            {
                cout<<"Aporiptete"<<endl;
                sum=sum+0;
            }
            else
            {
                sum=sum+eplak;
            }
        }
        while(!(l>0 && w>0));
    }
    cout<<"To sinoliko emvadon se cm2 einai: "<<sum<<endl;
    return 0;
}
