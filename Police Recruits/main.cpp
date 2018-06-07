#include <bits/stdc++.h>

using namespace std;

int main()
{
    int events;
    cin >> events;
    int arr[events];
    int soulution = 0, av = 0;
    for (int i = 0; i < events; i++)
        cin >> arr[i];
    for (int i = 0; i < events; i++)
    {
        if (arr[i] != -1)
            av += arr[i];
        else
        {
            if (av > 0)
            {
                av--;

            }
            else
            {
                soulution++;
                soulution -= av;
                av = 0;
            }
        }
    }
    cout << soulution << endl;
    return 0;
}