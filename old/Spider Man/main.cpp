#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n , a , d;

    cin>>n;

    int solution = 1 ;

    while(n--)
    {

        cin>>a;

        d  = a / 2;
        if( d % 2 == 0)
            solution = 2;

        cout << solution << endl;
        solution = 1;
    }

    return 0;
}
