#include <iostream>

using namespace std;

int main()
{
    int n , k ;

    long long solution = 0;

    cin >> n >> k ;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mn = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (mn > arr[i])
            mn = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]-= mn;

        if(arr[i] % k != 0)
        {
            cout << "-1" << endl;
            return 0;
        }
        else
            solution+= arr[i] / k ;
    }
    cout << solution << endl;

    return 0;
}
