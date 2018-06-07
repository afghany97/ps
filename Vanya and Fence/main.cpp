#include <bits/stdc++.h>

using namespace std;

int main()
{
    int height, friends, min_width = 0;
    cin >> friends >> height;
    int friends_height[friends];
    for (int i = 0; i < friends; i++)
    {
        cin >> friends_height[i];
        if (friends_height[i] > height)
            min_width += 2;
        else
            min_width++;
    }
    cout << min_width << endl;
}