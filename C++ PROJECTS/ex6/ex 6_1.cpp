#include<iostream>
using namespace std;
string binary(unsigned char ch);

int main()
{
    unsigned char c=0x61;
    string s;
    cout<<"pathse plhktro:";
    cin>>c;
    s=binary(c);
    cout<<c<<"="<<(int) c<<"="<<showbase<<hex<<(int)c<<"="<<s<<endl;

    cout<<endl<<endl;

    for(char d='0';d<='z';d++)
    {
        s=binary(d);
        cout<<d<<"="<<dec<<(int)d<<"="<<showbase<<hex<<(int)d<<"="<<s<<endl;
    }
    cout<<endl<<endl;
    char e;
    cout<<"dose plhktro:";
    cin>>e;
    s=binary(e);
    cout<<e<<"="<<dec<<(int)e<<"="<<showbase<<hex<<(int)e<<"="<<s<<endl;
    e=e|32;
    s=binary(e);
    cout<<e<<"="<<dec<<(int)e<<"="<<showbase<<hex<<(int)e<<"="<<s<<endl;
    cout<<endl<<endl;

}

string binary(unsigned char ch)
{

    string t="";
    for(int k=128;k>0;k=k>>1)
    {
        if((ch&k)!=0)
              t=t+'1';
        else
             t=t+'0';
    }
    return t;
}
