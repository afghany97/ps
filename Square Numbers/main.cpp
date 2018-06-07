#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    int counter = 0;
    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        for (int i = a; i <= b; i++)
        {
            if (sqrt(i) == i / sqrt(i))
            {
                counter++;
            }
        }
        cout << counter << endl;
        counter = 0;
    }
    return 0;
}
