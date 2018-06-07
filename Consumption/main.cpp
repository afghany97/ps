#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;
    float y;
    cin >> y;
    cout<<fixed<<setprecision(3)<<x/y<<" km/l"<<endl;
    return 0;
}
