#include <iostream>

using namespace std;

int main()
{
    int t = 5 ;
    int i = 1;
    while(t--)
    {
        int j = 7;
        for (int k = 0; k <3; k++)
        {
            cout<<"I="<<i<<" J="<<j<<endl;
            j--;
        }
        i+=2;
    }
    return 0;
}
