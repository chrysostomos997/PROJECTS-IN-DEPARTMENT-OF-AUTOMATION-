#include<iostream>
#include<cstring>
using namespace std;
int plithos(char s[])
{
    int i,n;
    int plgr=0;
    n=strlen(s);
    for(i=0 ; i<n ; i++)
    {
        if(isalpha(s[i]))
            plgr++;
    }
    return plgr;

}
int plithos(char s[],int &plar)
{
    int i,n;
    plar=0;
    n=strlen(s);
    for(i=0; i<n; i++)
    {

        if(isdigit(s[i]))
            plar++;
    }
    return plar;

}

int main()
{
    int plgr,plar;
    char s[20];
    cout<<"grapse keimeno:";
    cin>>s;

    cout<<"exei  "<<plithos(s)<<"  grammata\n";
    cout<<"exei  "<<plithos(s,plar)<<"  arithmous\n";


}




