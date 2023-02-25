#include <iostream>
using namespace std;
int paragontiko(int n);
int main ()
{
    int n,r,a,b;
    double c;
    cout<<"Mexri pio akeraio n: ";
    cin>>n;
    a=paragontiko(n);//klish tis sinarthshs.To apotelesma tis ekxwreitai stn a.
    cout<<"Apotelesma a: "<<a<<endl;
    cout<<"Mexri pio akeraio r: ";
    cin>>r;
    b=paragontiko(r);//klish tis sinarthshs.To apotelesma tis ekxwreitai stn b.
    cout<<"Apotelesma b: "<<b<<endl;
    c=a/b;
    cout<<"O logos twn apotelesmatwn einai c= "<<c<<endl;
}
    int paragontiko(int n)//Orismos tis sinarthshs

    {
        int p=1,i;//Topikes metavlites.Yparxoun mono mesa sautn tn sinarthsh
        for(i=1 ; i<=n ; i++)
            p=p*i;
        return p;
    }











































