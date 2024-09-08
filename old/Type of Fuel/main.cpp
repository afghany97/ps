#include <iostream>

using namespace std;

int main()
{
    int x , al = 0 , gas = 0 , die = 0;
    while(true)
    {
        cin >> x;
        if (x == 1)
        {
            al++;
        }
        else if (x == 2)
        {
            gas++;
        }
        else if (x == 3)
        {
            die++;
        }
        else if (x == 4)
        {
            break;
        }
    }
    cout << "MUITO OBRIGADO" << endl << "Alcool: " << al << endl << "Gasolina: " << gas << endl << "Diesel: " << die << endl ;
    return 0;
}
