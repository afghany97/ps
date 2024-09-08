#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout<<"enter the string : ";
    string x; cin>>x;
    int y[x.length()];
    for (int i = 0 ; i < x.length(); i++)
    {
        y[i]=x[i]-48;
    }
    int number = 0 , n =x.length() - 1 ;
    for (int i = 0 ; i < x.length(); i++)
    {
        float z = pow(10,i);
        number+=y[n]*z;
        n--;
    }
    cout<<"the integer number : "<<number+5<<endl;
}
