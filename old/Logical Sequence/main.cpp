#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << i * i << " " << i * i * i  << endl;
        for (int j = i; j < i+1 ; j++)
        {
            cout << j << " " << j * j + 1 << " " << j * j * j + 1 << endl;
        }
    }
    return 0;
}
