#include <iostream>
#include <iomanip>
#include <cstdlib>
#define S 4
#define M 3
using namespace std;

int main ()

{
    //1o meros
    int s,m;
    double b[S][M];
    for (m=1; m<M ; m++)
    {
        for (s=1; s<S; s++)
        {
            cout << "Dose gia to " << m << " mathima, thn vathomologia tou "
                 << s << " spoudasti: ";
            cin >> b[s][m];
        }
        cout <<endl;
    }

    //2o meros
    int  p1,p2,r1,r2;
    p1=p2=r1=r2=0;
    cout << "poio mathima theleis: ";
    cin >> m;
    cout <<endl;
    for (s=1; s<S ; s++)
    {
        if (b[s][m]>=5)
        {
            p1++;

            if (b[s][m] >= 8.5)
            {
                p2++;
            }
        }
        else
        {
            r1++;

            if (b[s][m]==0)
            {
                r2++;
            }
        }
    }
    cout << "Sto "<< m << "o MATHIMA"<<endl;
    cout << "Perasan: " << p1 <<endl;
    cout << "Htan aristouxoi: " << p2 <<endl;
    cout << "kopikan: " << r1 <<endl;
    cout << "kopikan me miden: " << r2 <<endl;

    //3o meros
    p1=p2=r1=r2=0;
    for (s=1; s<S ; s++)
    {
        for (m=1; m<M ; m++)
        {
            if (b[s][m]>=5)
            {
                p1++;

                if (b[s][m] >= 8.5)
                {
                    p2++;
                }
            }
            else
            {
                r1++;

                if (b[s][m]==0)
                {
                    r2++;
                }
            }
        }

    }
    cout << endl;
    cout << "Sto sinolo twn mathimatwn "<<endl;
    cout << "perasan: " << p1 <<endl;
    cout << "htan aristouxoi: " << p2 <<endl;
    cout << "kopikan: " << r1 <<endl;
    cout << "kopikan me miden: " << r2 <<endl;

    //4o meros
    cout << "\n//d meros";
    int p,r;
    double P[M],R[M];
    for (m=1; m<M ; m++)
    {
        p=0;
        cout << "\nEmfanise posoi mathites PERASAN sto mathima "<< m << ": ";
        for (s=1; s<S ; s++)
        {
            if (b[s][m]>=5)
            {
                p++;

            }
            P[m]=p;
        }
        cout <<P[m];
    }

    cout <<endl;
    for (m=1; m<M ; m++)
    {
        r=0;
        cout << "\nEmfanise posoi mathites KOPIKAN sto mathima "<< m << ": ";
        for (s=1; s<S ; s++)
        {
            if (b[s][m]<5)
            {
                r++;
            }
            R[m]=r;
        }
        cout <<R[m];
    }
    cout <<endl;
    return 0;
}
