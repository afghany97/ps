#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int solution = 0;
    for (int i = 1; i <= n; i++)
        for(int j = i; j * i <= n; j++)
            solution++;

    cout << solution;
    return 0;
}
