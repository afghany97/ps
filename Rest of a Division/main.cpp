#include <iostream>

using namespace std;

int main()
{
    int x , y , counter = 0;
    do
    {
    cin >> x >> y;
    } while (x < 0 ||  y < 0) ;
    if (x < y)
    {
        for (int i = x ; i < y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                counter++;
            }
        }
        for (int i = x ; i < y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                cout << i ;
                if (counter > 1)
                {
                    cout << "\n";
                    counter--;
                }
            }
        }
    }
    else
    {
         for (int i = y ; i < x; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                counter++;
            }
        }
        for (int i = y ; i < x; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                cout << i ;
                if (counter > 1)
                {
                    cout << "\n";
                }

            counter--;
            }
        }
    }
    return 0;
}
