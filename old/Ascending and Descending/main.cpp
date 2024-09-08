#include <iostream>

using namespace std;

int main()
{
    int x , y;
    do
    {
        cin >> x >> y ;
        if (x == y)
        {
            break;
        }
        if (x > y)
        {
            cout<<"Decrescente"<<endl;
        }
        else
        {
            cout<<"Crescente"<<endl;
        }
    } while (x != y);
    return 0;
}
