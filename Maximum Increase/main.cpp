#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int counter = 0;

    long long mx[n] = {0};

    for(int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i+1])
        {
            counter++;
            mx[i] = counter;
        }
        else
        {
            counter = 0;
        }
    }
    int solution = -1;

    for(int i = 0; i < n; i++)
        {
            if (solution < mx[i])
                solution = mx[i];
        }

    cout << solution + 1 << endl;

    return 0;
}
