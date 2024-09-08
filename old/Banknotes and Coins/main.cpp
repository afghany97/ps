#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float n;
    cin >> n ;
    cout<<"NOTAS:"<<endl;
    int i100 = 0 , i50 = 0 , i20 = 0 , i10 = 0 , i5 = 0 , i2 = 0 , i1 = 0 , i0_50 = 0 , i0_25 = 0 , i0_10 = 0 , i0_05 = 0 , i0_01 = 0;
    while ( n >= 100)
    {
        i100++;
        n-=100;
    }
    while ( n >= 50)
    {
        i50++;
        n-=50;
    }
    while ( n >= 20)
    {
        i20++;
        n-=20;
    }
    while ( n >= 10)
    {
        i10++;
        n-=10;
    }
    while ( n >= 5)
    {
        i5++;
        n-=5;
    }
    while ( n >= 2)
    {
        i2++;
        n-=2;
    }
    cout<<fixed<<setprecision(2)<<i100<<" nota(s) de R$ 100.00"<<endl<<i50<<" nota(s) de R$ 50.00"<<endl<<i20<<" nota(s) de R$ 20.00"<<endl<<i10<<" nota(s) de R$ 10.00"<<endl<<i5<<" nota(s) de R$ 5.00"<<endl<<i2<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    while ( n >= 1.0)
    {
        i1++;
        n-=1.0;
    }
    while ( n >= 0.50)
    {
        i0_50++;
        n-=0.50;
    }
    while ( n >= 0.25)
    {
        i0_25++;
        n-=0.25;
    }
    while ( n >= 0.10)
    {
        i0_10++;
        n-=0.10;
    }
    while ( n >= 0.05)
    {
        i0_05++;
        n-=0.05;
    }
    while ( n >= 0.001)
    {
        i0_01++;
        n-=0.01;
    }
    cout<<i1<<" moeda(s) de R$ 1.00"<<endl<<i0_50<<" moeda(s) de R$ 0.50"<<endl<<i0_25<<" moeda(s) de R$ 0.25"<<endl<<i0_10<<" moeda(s) de R$ 0.10"<<endl<<i0_05<<" moeda(s) de R$ 0.05"<<endl<<i0_01<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
