#include <iostream>

using namespace std;

int main()
{
    int x , y , sum =0;
    cin >> x >> y ;
    if ( y > x)
    {
        for (int i = x; i <= y; i++)
        {
            if (i % 13 == 0)
            {
                continue ;
            }
            else
            {
                sum+=i;
            }
        }
    }
    else
    {
        for (int i = y; i <= x; i++)
        {
            if (i % 13 == 0)
            {
                continue ;
            }
            else
            {
                sum+=i;
            }
        }
    }

    cout<<sum<<endl;
    return 0;
}
