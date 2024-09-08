#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    cout << n << c;
    int ar[n];
    int soul = 0, befor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] - befor <= c)
        {
            soul++;
            befor = ar[i];
        }
        else
            break;
    }
    cout << soul << endl;
    int x;
    cin >> x;
}