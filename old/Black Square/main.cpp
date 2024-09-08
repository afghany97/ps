#include <bits/stdc++.h>

using namespace std;

int str_to_int(char x)
{
    return (int(x - 48));
}

int main()
{
    int cost[4];
    for (int i = 0; i < 4; i++)
        cin >> cost[i];
    string target;
    cin >> target;
    int solution = 0;
    for (int i = 0; i < target.length(); i++)
        solution += cost[str_to_int(target[i]) - 1];
    cout << solution << endl;
    return 0;
}