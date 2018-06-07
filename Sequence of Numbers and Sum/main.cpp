#include <iostream>

using namespace std;

int main()
{
    int x , y;

    do
    {
        cin >> x >> y;
        int sum = 0;
        if (y <= 0 || x <= 0)
        {
            return 0;
        }
        if ( x > y)
        {

        for (int i = y; i <= x; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
        }
        else
        {
            for (int i = x; i <= y; i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        }
        while ( y > 0 || x > 0);
    return 0;
}
