#include <iostream>

using namespace std;

int main()
{
    float x , y = 0;
    int i = 0;
    while (i < 2)
    {
        cin >> x ;
        if (x >=0 && x <= 10)
        {
            y+=x;
            i++;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
    }
    cout << "media = " << y / i << endl;
    return 0;
}
