#include <iostream>

using namespace std;

int main()
{
    int n , m , i = 0;
    cin >> n >> m;
    while  (n != 0)
    {
        n--;
        i++;
        if (i % m == 0)
        {
            n++;
        }
    }
    cout << i << endl;
    return 0;
}
