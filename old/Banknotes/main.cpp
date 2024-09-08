#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    cout<<n<<endl;
    int i100 = n / 100;
    cout<<i100<<" nota(s) de R$ 100,00"<<endl;
    int  i50 = n % 100 / 50;
    cout<<i50<<" nota(s) de R$ 50,00"<<endl;
    int i20 = n % 100 % 50 / 20;
    cout<<i20<<" nota(s) de R$ 20,00"<<endl;
    int i10 = n % 100 % 50 %20 / 10 ;
    cout<<i10<<" nota(s) de R$ 10,00"<<endl;
    int i5 = n % 100 % 50 % 20 % 10 / 5;
    cout<<i5<<" nota(s) de R$ 5,00"<<endl;
    int i2 = n % 100 %50 % 20 % 10 % 5 / 2;
    cout<<i2<<" nota(s) de R$ 2,00"<<endl;
    int i1 = n % 100 % 50 % 20 %10 % 5 % 2 / 1;
    cout<<i1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
