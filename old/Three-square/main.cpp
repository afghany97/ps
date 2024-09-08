#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        vector<int> numbers;
        for (int i = 0; i <= k; i++)
            for (int j = i + 1; j <= k; j++)
                for (int l = j + 1; l <= k; l++)
                {
                    int temp = (i * i) + (j * j) + (l * l);
                    numbers.push_back(temp);
                }

        sort(numbers.begin(), numbers.end());
        if (binary_search(numbers.begin(), numbers.end(), k))
        {
            for (int i = 0; i < numbers.size(); i++)
            {
                if (numbers[i] == k)
                {
                    cout << i << endl;
                    return 0;
                }
            }
        }

        return 0;
    }
}
