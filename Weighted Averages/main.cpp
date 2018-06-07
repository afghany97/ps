#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x , y , z;
        cin >> fixed >> setprecision(1) >> x >> y >> z;
        float total = (x * 2) + (y * 3) + (z * 5);
        cout << fixed << setprecision(1) <<total/10<<endl;
    }
    return 0;
}
