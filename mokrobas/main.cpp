#include <iostream>

using namespace std;

int main()
{
    float ogra , customer = 0;
    int n; // n 3add l rokab
    cin >> ogra >> n;
    while(n--)
    {
        do
        {
            cin >> customer;
            if(customer < ogra)
                cout << "5od ya nasab :D " << endl;
        }while(customer < ogra);

        cout << customer - ogra << endl;
    }
    return 0;
}
