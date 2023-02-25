#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    double bmi,mmi,kmi;
    int ap;
    cout<<"Dose basiko mistho ipallilou : ";
    cin>>bmi;
    cout<<"Dose arithmo paidiwn : ";
    cin>>ap;
    if(ap<=2)
    {
        mmi=bmi+(ap*15);
        kmi=mmi*0.8;
    }
    else
    {
        if(2<ap&&ap<=5)
        {
            mmi=bmi+(2*15+(ap-2)*25);
            kmi=mmi*0.8;
        }
        else
        {
            mmi=bmi+(ap*40);
            kmi=mmi;
        }
    }
    cout<<"O miktos misthos einai : "<<mmi<<endl;
    cout<<"O katharos misthos einai : "<<kmi<<endl;
    return 0;
}
