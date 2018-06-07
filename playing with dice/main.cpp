#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;

    int aa = 0 , bb = 0 , ab = 0;
    for (int i = 1; i <= 6; i++)
    {
        if(abs(a -i ) > abs(b - i))
        {
            bb++;
        }
        else if (abs(a - i) < abs(b - i))
        {
            aa++;
        }
        else
        {
            ab++;
        }
    }
    cout << aa <<" "<< ab << " " << bb << " " << endl;
    return 0;
}
