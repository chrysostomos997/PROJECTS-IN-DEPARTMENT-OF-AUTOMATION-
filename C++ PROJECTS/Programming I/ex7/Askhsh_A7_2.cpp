#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string onoma;
    int ilikia,N,pl=0;


    ofstream fout("apotelesma.txt",ios::app);
    cout<<"Posa onomata?: ";
    cin>>N;
    while(!N==0)
    {

            cout<<"Dose onoma: ";
            cin>>onoma;
            cout<<"Dose ilikia: ";
            cin>>ilikia;
            fout<<onoma<<"\t"<<ilikia<<endl;

        N--;
        pl++;
    }
    cout<<"Graftikan "<<pl<<" onomata";
    fout.close();
    return 0;
}
