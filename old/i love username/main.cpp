#include <iostream>

using namespace std;

int main()
{
    int n , high , low , a , ans = 0;
    cin >> n >> a ;
    hight = a;
    low = a ;
    for (int i = 1; i < n ; i++)
    {
        cin >> a;
        if (high < a)
        {
            high = a ;
            ans++;
        }
        if (low > a )
        {
            low = a;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
