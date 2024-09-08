#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int counter = 0 , t;
    float x , sum = 0;
    while (true)
    {
        jump:
        cin >> x;
        if (x < 0 || x > 10)
        {
            cout << "nota invalida" << endl;
            continue;
        }
        counter++;
        sum+= x;
        if (counter == 2)
        {
            cout << fixed << setprecision(2) << "media = " << (float) sum / counter << endl;
            sum = 0 , counter = 0 ;

            do
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> t;
                if (t == 2)
                {
                    return 0;
                }
                else if (t == 1)
                {
                    goto jump;
                }
            } while (t != 1 && t != 2);
        }
    }

    return 0;
}
