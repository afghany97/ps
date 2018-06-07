#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a , b ;
    float total ;
    cin >> a >> b ;
    if ( a == 1)
    {
        total = b * 4.0;
    }
     if ( a == 2)
    {
        total = b * 4.50;
    }
     if ( a == 3)
    {
        total = b * 5.0;
    }
     if ( a == 4)
    {
        total = b * 2.0;
    }
     if ( a == 5)
    {
        total = b * 2.0;
    }
     if ( a == 1)
    {
        total = b * 1.50;
    }
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    return 0;
}
