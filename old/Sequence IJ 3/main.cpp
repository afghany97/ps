#include <iostream>

using namespace std;

int main()
{
    int t = 5 ;
    int i = 1;
    int j = 7;
    while(t--)
    {
        for (int k = 0; k <3; k++)
        {
            cout<<"I="<<i<<" J="<<j<<endl;
            j--;
        }
        i+=2;
        j+=5;
    }
    return 0;
}
