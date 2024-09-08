#include <bits/stdc++.h>

using namespace std;

int main()
{
    int magnets, groups = 0;
    cin >> magnets;
    string cases[magnets];
    for (int i = 0; i < magnets; i++)
    {
        cin >> cases[i];
    }
    for (int i = 0; i < magnets - 1; i++)
    {
        if (cases[i][0] != cases[i + 1][0])
            groups++;
    }
    cout << groups + 1 << endl;
}