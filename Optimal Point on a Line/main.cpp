#include <iostream>

#include <algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int ar[n];
    int temp[n];
    int mn[n] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        temp[i] = ar[i];
    }
    sort(ar , ar + n);
    int min = mn[0];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum+= ar[i];
        mn[n] = sum;
    }
    int solution = 0;
    for(int i = 0; i < n; i++)
    {
        if(min > mn[i])
        {
            min = mn[i];
            solution = i;
        }
    }
    cout << temp[solution + 1] << endl;
    return 0;
}
