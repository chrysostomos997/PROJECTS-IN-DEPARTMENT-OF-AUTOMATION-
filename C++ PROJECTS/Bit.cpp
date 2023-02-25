#include <iostream>
using namespace std;
int main()
{
    //diavazei xaraktira kai elenxei to bit 7 (msb) an einai 1
    //1
    char ch;
    cout<<"Dose charaktira: ";
    cin>>ch;
    char ap;
    ap=ch&128;//0x80
    if(ap==0)
    cout<<"To msb einai 0\n";
    else
    cout<<"To msb einai 1\n";

    //2
    //Elenxos an b5,b2 einai 0
    ap=ch&36;
    if(ap==0)
    cout<<"kai ta 2 einai 0\n";
    else if(ap==4)
    cout<<"To b2 einai 1 kai to b5 einai 0\n";
    else if(ap==32)
    cout<<"To b2 einai 0 kai to b5 einai 1\n";
    else
    cout<<"kai ta 2 einai 1\n";
    //3
    //Thetoume to b1 se 1 xwris na analksoun ta ipoloipa
    ch=ch|2;

    //4
    //Thetoume to b3 se 0 xwris na alaksoun ta ipolipa
    ch=ch&247; // 0xF7

}




















