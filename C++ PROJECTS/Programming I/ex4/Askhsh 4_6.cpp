#include<iostream>
#include<iomanip>
#define N 5
using namespace std;
int main()
{
  int ath,gin,n,i;
  ath=0;
  gin=1;
  for (int i=1 ; i<=N ; i++)
  {
      do
  {
    cout << "Dose enan thetiko arithmo : ";
    cin >> n;
    ath = ath + n;
    gin = gin * n;
  }
    while (n<=0);
  }
cout <<"to athroisma einai : "<< ath <<endl;
cout <<"to ginomeno einai : "<< gin <<endl;
  return 0;
}
