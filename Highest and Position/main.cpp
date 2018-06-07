#include <iostream>

using namespace std;

int main()
{
    int maxx = 0 , t;
    int ar[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < 100; i++)
    {
        if(ar[i] > maxx)
        {
            t = i;
            maxx=ar[i];
        }
    }
    t++;
    cout<<maxx<<endl<<t<<endl;
    return 0;
}
