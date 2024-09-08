#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;
    int string_length = s.length(), key_counter = 0;
    map<char, int> m;
    map<char, int>::iterator it, tmp;
    for (int i = 0; i < string_length; i++)
    {
        char temp = s[i];
        if (m[temp] == 0)
        {
            m[temp] = 1;
            key_counter++; // 3andy kam 7arf fel string
        }
        else
            m[temp]++; // adeha temp l hoa l 7arf w hytl3 f kam 7arf 3andy fel string
    }
    if(key_counter == 1)
    {
        cout << s << endl;
        return 0;
    }
    // start check if the string can be convert it to k-string
    for (int i = 0; i < string_length; i++)
    {
        char temp = s[i];
        if (m[temp] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    // end check if the string can be convert to k-string
    string new_string = "";
    for (it = m.begin(); it != m.end(); it++)
    {
        int en = (*it).second / k;
        for (int j = 0; j < en; j++)
        {
            new_string += (*it).first;
        }
    }
    while(k--)
    {
        cout << new_string ;
    }
    cout << endl;
}