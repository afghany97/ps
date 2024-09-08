#include <iostream>

using namespace std;

int main()
{
    int n, m, k, r, c;
    cin >> n >> m >> k;
    int rows[m + 1] = {0};
    int t = n, sum = 0;
    while (t--)
    {
        cin >> r >> c;
        rows[r] = c;
    }
    for (int i = 0; i < m + 1; i++)
    {
        if (rows[i] >= k)
        {
            cout << k << endl;
            return 0;
        }
        sum += rows[i];
    }
    if (sum >= k)
    {
        cout << k << endl;
        return 0;
    }
    cout << sum << endl;
    return 0;
}