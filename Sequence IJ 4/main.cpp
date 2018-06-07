#include <iostream>

using namespace std;

int main()
{
    float i = 0 ;
    int t = 10;
    float m = 1.2;
    while (i <= 2.1)
    {
        if ( i == 0)
        {
            float jj = 0;
           for (int k = 0; k < 3; k++)
           {
                jj++;
                cout<<"I="<<i<<" J="<<jj<<endl;
           }
        }
        if (i != 0)
        {
            float j = m ;
            for (int k = 0; k < 3; k++)
            {
                cout<<"I="<<i<<" J="<<j<<endl;
                j++;
            }
            m+=0.2;
        }
        i+=0.2;

    }
    return 0;
}
