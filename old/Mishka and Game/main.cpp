#include <iostream>

using namespace std;

int main()
{
    int n ;
    int mishka = 0 , chris = 0;
    cin >> n ;
    int x , y ;
    while (n--)
    {
        do
        {
            cin >> x >> y;
            if (x > y)
                mishka++;
            else if (y > x)
                chris++;
        }while(x > 6 || y > 6);
    }
    if (mishka > chris)
    {
        cout << "Mishka" << endl;
    }
    else if (chris > mishka)
    {
        cout << "Chris" << endl;
    }
    else
        cout << "Friendship is magic!^^" << endl;
    return 0;
}
