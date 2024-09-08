#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n,unit,price;
    float total;
    for ( int i = 0; i < 2; i++)
    {
        cin>> n >> unit >> price;
        total+=price*unit;
    }
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;

}
