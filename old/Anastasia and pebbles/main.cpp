#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long n ;
    long k ;
    cin >> n >> k ;
    int arr[n];
    long long  solution = 0;
    double number = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < k)
            number++;

        else if (arr[i] >= k)
        {
           if (arr[i] % k == 0)
                number+= arr[i] / k;

           else
                number+= (arr[i] / k ) + 1 ;
        }
    }
    solution = round (number / 2.0) ;
    cout << solution << endl;
    return 0;
}
