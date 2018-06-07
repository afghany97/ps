#include <bits/stdc++.h>

using namespace std;

int main()
{
    int matrix[5][5], row, column;
    for (int i = 0; i < 25; i++)
    {
        cin >> matrix[i / 5][i % 5];
        if (matrix[i / 5][i % 5] == 1)
        {
            row = (i / 5) + 1;
            column = (i % 5) + 1;
        }
    }
    cout << abs((3 - row)) + abs((3 - column)) << endl;
}