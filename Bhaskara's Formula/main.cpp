#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float a , b , c ;
    cin >> a >> b >> c ;
    if (a == 0)
    {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }
    float b2= b * b;
    float sqr = sqrt(b2- 4 * a * c);
    if (sqr == 0)
    {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }
    float total1 = (-b + sqr) / 2 * a;
    float total2 = (-b - sqr) / 2 * a;
    cout<<"R1 = "<<total1<<endl;
    cout<<"R2 = "<<total2<<endl;
    return 0;
}
