#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int start , End;
    cin >> start >> End;
//    float numbers = round((End - start + 1) / 2);
    int ar[End];
    int index = 0;
    for (int i = 2; i <= End; i++)
    {
        int internal = 0;
        for (int j = start; j <= End; j++)
        {
            if (j % i == 0)
                internal++;
        }
        ar[index] = internal;
        index++;
    }
    int mx = ar[0];
    int k ;
    for (int i = 0; i < index; i++)
    {
        if (mx < ar[i])
        {
            mx = ar[i];
            k = i;
        }
    }
    cout << k + 2 << endl;
    return 0;
}
