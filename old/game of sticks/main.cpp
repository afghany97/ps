#include <iostream>

using namespace std;

int main()
{
    int m , n , x;
    cin >> m >> n;
    int sticks = m + n ;
    int points = m * n ;
    if (n > m)
    {
        x = m;
    }
    else
    {
        x = n;
    }
    if (x % 2 == 0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
    return 0;
}
