#include <iostream>
using namespace std;
void grammi(int n,char c);//epistrefei tipota.H sinartisi legete grammi.
int main()
{
    char a,b,y;
    int x;
    a='*';
    grammi(10,'*');//10 einai to mikos tis grammis
    b='$';
    grammi(8,'$');//8 einai to mikos tis grammis
    cout<<"Dwse x: ";
    cin>>x;
    cout<<"Dose charaktira: ";
    cin>>y;
    grammi(x,y);

}
void grammi(int n,char c)
{
    int i;
    for(i=1 ; i<=n ; i++)
        cout<<c;
    cout<<"\n";
}
