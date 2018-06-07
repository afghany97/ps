#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001] = {0};
    int x ;
    int d = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x ;
        if (d < ++a[x])
            d = a[x];
    }
    cout << n - d << endl;

    return 0;
}
