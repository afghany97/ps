#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int length = s.length();
    char letters[] = {'a', 'e', 'i', 'o', 'y', 'u'};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < length; j++)
        {
            int tmp = s.find(letters[i]);
            if (tmp >= 0 && tmp < length)
            {
                s.erase(tmp, 1);
            }
        }
    }
    length = s.length();
    string t = ".";
    int en = (length * 2) - 1;
    for (int i = 0; i < en; i += 2)
    {
        s.insert(i, t);
    }
    cout << s << endl;
}