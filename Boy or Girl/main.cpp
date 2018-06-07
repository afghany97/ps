#include <bits/stdc++.h>

using namespace std;

int main()
{
    string username;
    cin >> username;
    vector<char> letters;
    for (int i = 0; i < username.length(); i++)
    {
        letters.push_back(username[i]);
    }
    sort(letters.begin(), letters.end());
    letters.erase(unique(letters.begin(), letters.end()), letters.end());
    if (letters.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}