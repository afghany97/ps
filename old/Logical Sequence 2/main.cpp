#include <iostream>

using namespace std;

int main()
{
    int x , y , z = 1 , j = 0;
    cin >> x >> y;
    for (int i = 0; i < y / 3; i++)
    {
        for (j = z; j < z+3; j++)
        {
            cout << j << " " ;
        }
        if (j == y)
        {
            return 0;
        }
        cout << "\n";
        z+= 3;
    }
    return 0;
}
