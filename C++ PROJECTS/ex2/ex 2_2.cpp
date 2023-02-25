#include <iostream>
#include <string>
using namespace std;
void grammi(string ,int);
void grammi(char,int);

void grammi(char ch, int n=3)
{
    for (int i=1; i<=n; i++)
    {
        cout << ch;
    }
    cout << endl;
    return;
}

void grammi(string ch="Sfalma", int n=2)
{
    for (int i=1; i<=n; i++)
    {
        cout << ch;
    }
    cout << endl;
    return;
}
int main()
{
    char s[20]="Nikos";

    grammi('*',5);  // *****
    grammi('#');    // ###
    grammi("Abcd",5);
    grammi("Xyz");
    grammi("*");
    grammi(s,3);
    grammi();
    grammi('@'); //@@@ giati exei ''(xaraktiras) kai etsi paei stn sinartisi (char ch,int n=3)
    grammi("$"); //$$ giati exei ""(string) kai etsi paei stn sinartisi (string ch="Sfalma",int n=2)

}
