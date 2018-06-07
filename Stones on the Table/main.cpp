#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int stones = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            stones++;
        }
    }
    cout << stones << endl;
    return 0;
}