#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    //a part
    char ch;
    int k;
    cout<<"Dose charaktira: ";
    cin>>ch;
    while(ch!='@')
    {
        cout<<"Charaktiras: "<<ch<<" ASCII timh toy charaktira: "<<int(ch)<<endl;
        cout<<"Dose charaktira: ";
        cin>>ch;
    }
    //b part
    cout<<"Dose charaktira apo 32-255: ";
    cin>>k;
    cout<<"ASCII timh tou charaktira: "<<k<<" Charaktiras: "<<char(k);

    //c part
    cout<<"\nDose charaktira: ";
    cin>>ch;
    k=int(ch)+1;
    cout<<"O epomenos charaktiras einai o "<<char(k)<<endl;
    //d part
    cout<<"Dose charaktira: ";
    cin>>ch;
    if('a'<=ch && ch<='z')
    {
        k=int(ch)-32;
        cout<<" O antistixos kefalaios charaktiras einai: "<<char(k)<<endl;
    }
    //ch=toupper(ch);
    //cout<<"\n O antistoixos kefalaios charaktiras einai: "<<ch<<endl;

    return 0;
}
