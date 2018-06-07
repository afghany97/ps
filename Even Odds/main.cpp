#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long internal, local = 0, operation;
    if (n % 2 == 0)
    {
        internal = n / 2;
        if (internal >= k)
        {
            cout << (2 * k) - 1 << endl;
        }
        else
        {
            local = internal;
            operation = k - local;
            cout << operation * 2 << endl;
        }
    }
    if (n % 2 != 0)
    {
        internal = (n / 2) + 1;
        if (internal >= k)
        {
            cout << (2 * k) - 1 << endl;
        }
        else
        {
            local = internal;
            operation = k - local;
            cout << operation * 2 << endl;
        }
    }
}
