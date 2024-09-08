#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long operation = floor(n / 2);
    if (n < k)
    {
        cout << 0 << " " << 0 << " " << n << endl;
        return 0;
    }
    long long dip = floor((operation / (k + 1)) * k);
    long long cer = floor(operation / (k + 1));
    long long other = (n - (dip + cer));
    other += (operation % (k + 1));
    cout << cer << " " << dip << " " << (n - (dip + cer)) << endl;
}