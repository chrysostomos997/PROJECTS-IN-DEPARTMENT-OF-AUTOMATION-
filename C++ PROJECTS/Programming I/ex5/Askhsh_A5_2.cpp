#include<iostream>
#include<iomanip>
#define N 4
#define K 3
using namespace std;
int main()
{
    double b[N][K];
    int i,j,p1,p2,r1,r2;
    for(j=0; j<K; j++)
    {
        for(i=0; i<N; i++)
        {
            cout<<"Dose vathmo gia mathima b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
        cout<<"Telos mathimatos!"<<"("<<j<<")"<<endl;
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<K; j++)
        {
            cout<<setw(5)<<b[i][j];
        }
        cout<<endl;
    }

    p1=p2=r1=r2=0;
    cout<<"Pio mathima theleis?: ";
    cin>>j;
    for(j=0; j<K; j++)
    {
        if(b[i][j]>=5)
        {
            p1++;
            if(b[i][j]>=8.5)
            {
                p2++;
            }
        }
        else
        {
            r1++;
            if(b[i][j]==0)
            {

                r2++;
            }
        }

    }

    int P1,P2,R1,R2;
    P1=P2=R1=R2=0;
    for(j=0; j<K; j++)
    {
        for(i=0; i<N; i++)
        {
            if(b[i][j]>=5)
            {
                P1++;
                if(b[i][j]>8.5)
                {
                    P2++;
                }
            }
            else
            {
                R1++;
                if(b[i][j]==0)
                {
                    R2++;
                }
            }
        }

    }
    cout<<"\nSinolikes epituxies="<<P1<<"\nSe sinola grapton="<<N*K<<endl;
    int P[K]= {0} , R[K]= {0};
    for(j=0; j<K; j++)
    {
        for(i=0; i<N; i++)
        {
            if(b[i][j]>=5)
            {
                P[j]++;
            }
            else
            {
                R[j]++;
            }
        }
    }
    cout<<"Ana mathhma: ";
    for(j=0; j<K; j++)
    {
        cout<<P[j]<<" ";
    }
    cout<<endl;
return 0;
}
