#include <iostream>

using namespace std;

int main()
{
    int n , j = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = j; k < j + 3; k++)
        {
            cout << k << " " ;
        }
        cout << "PUM" << endl;
        j+=4;
    }
    return 0;
}
