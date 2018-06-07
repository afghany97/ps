#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    int string_length = s.length(), key_counter = 0;
    map<char, int> m;
    map<char, int>::iterator it, tmp;
    for (int i = 0; i < string_length; i++)
    {
        char temp = s[i];
        if (m[temp] == 0)
        {
            m[temp] = 1;
            key_counter++;
        }
        else
            m[temp]++;
    }
    if (key_counter == 1)
    {
        cout << s << endl;
        return 0;
    }
    tmp = m.begin();
    for (it = m.begin(); it != m.end(); it++)
        if ((*tmp).second != (*it).second || (*tmp).second < key_counter)
        {
            cout << -1 << endl;
            return 0;
        }
    sort(s.begin(), s.end());
    char temp = s[0];
    int en = m[temp] - 1;
    for (int i = 1; i <= en; i++)
    {
        swap(s[i], s[i * m[temp]]);
    }
    string new_string = s.substr(0, m[temp]);
    int count = m[temp];
    int end_loop = string_length - m[temp];
    while (end_loop)
    {
        s.replace(count, count + m[temp], new_string);
        end_loop -= m[temp];
        count *= 2;
    }
    cout << s << endl;
}