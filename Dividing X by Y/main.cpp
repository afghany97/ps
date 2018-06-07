#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t ;
    float x , y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (y == 0)
        {
            cout<<"divisao impossivel"<<endl;
            continue;
        }
        else
        {
            cout << fixed << setprecision(1) << x / y <<endl;
        }

    }
    return 0;
}
