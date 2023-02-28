#include <iostream>
using namespace std;
int main()
{
    //read char and check bit 7 (msb) if its 1
    //1
    char ch;
    cout<<"Give character: ";
    cin>>ch;
    char ap;
    ap=ch&128;//0x80
    if(ap==0)
    cout<<"Msb is 0\n";
    else
    cout<<"Msb is 1\n";

    //2
    //Check if b5,b2 are 0
    ap=ch&36;
    if(ap==0)
    cout<<"both 0\n";
    else if(ap==4)
    cout<<"b2 is 1 and b5 is 0\n";
    else if(ap==32)
    cout<<"b2 is 0 and b5 is 1\n";
    else
    cout<<"both are 1\n";
    //3
    //b1 --> 1 without effect the others
    ch=ch|2;

    //4
    // b3 --> 0 without effect the others
    ch=ch&247; // 0xF7

}




















