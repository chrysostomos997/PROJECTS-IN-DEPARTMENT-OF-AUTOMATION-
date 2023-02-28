#include <iostream>
#include <string>
using namespace std;
void line(string ,int);
void line(char,int);

void line(char ch, int n=3)
{
    for (int i=1; i<=n; i++)
    {
        cout << ch;
    }
    cout << endl;
    return;
}

void line(string ch="error", int n=2)
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
    char s[20]="Nick";

    line('*',5);  // *****
    line('#');    // ###
    line("Abcd",5);
    line("Xyz");
    line("*");
    line(s,3);
    line();
    line('@'); //@@@ because ''(char) --> (char ch,int n=3)
    line("$"); //$$ because ""(string) --> (string ch="error",int n=2)

}
