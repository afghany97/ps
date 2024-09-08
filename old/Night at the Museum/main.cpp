#include <bits/stdc++.h>

#define loop(n) for (int i = 0; i < n; i++)
#define ll long long
#define str string
#define I int
#define D double
#define F float
#define B bool
#define elif else if

using namespace std;

int main()
{
    str s;
    cin >> s;
    int solution = 0;
    char start = 'a';
    char current = start;
    loop(s.length())
    {
        if (start < current)
        {
            solution += int(s[i] - start);
            start = s[i];
        }
        else
        {
            solution+= abs(int(start - s[i])) - 26;
            start = s[i];
        }

        //     solution+= min((abs(int (s[i] - start))), (abs(int (start - s[i]))));
        //   start = s[i];
    }
    cout << solution << endl;
    return 0;
}