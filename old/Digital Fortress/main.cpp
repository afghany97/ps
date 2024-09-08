#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin.get(str,10000);
        if (strlen(str) % 2 != 0)
        {
            cout << "INVALID" << endl;
        }
        cout << str << endl;
    }
    return 0;
}
