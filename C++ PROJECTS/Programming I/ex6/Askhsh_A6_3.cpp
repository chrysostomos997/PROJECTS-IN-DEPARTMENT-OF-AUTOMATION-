#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char C1[20],C2[20],C3[40];
    cout << "Dose proto keimeno: ";
    cin >> C1;
    cout << "Dose deytero keimeno: ";
    cin >> C2;
    if (strcmp(C1,C2)==0)
    cout << "Ta dyo keimena einai idia."<< endl;
    else if(strcmp(C1,C2)<0)
    cout << "To proto keimeno einai mikrotero." << endl;
    else
    cout << "To deytero keimeno einai mikrotero." << endl;

    strcpy(C3,C1);
    strcat(C3," ");
    strcat(C3,C2);
    cout << C3 << endl;

    return 0;
}
