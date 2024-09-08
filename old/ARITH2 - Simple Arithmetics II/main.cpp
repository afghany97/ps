#include <iostream>
#include <cmath>
#include<string>
using namespace std;
int convert2int(string x)
{


    int y[x.length()];
    float items[100];
    string oper[100];
    int internal_counter = 0;
    int n =x.length() - 1 , number = 0;
    for (int i = 0 ; i < x.length(); i++)
    {
        if (x[i] == '=')
            continue;
        if (x[i] == '*' || x[i] == '+' || x[i] == '-' || x[i] == '/')
        {
            oper[internal_counter] = x[i];
            items[internal_counter] = number ;
            internal_counter++;
            continue;
        }
        y[i]=x[i]-48;
        float z = pow(10,i);
        number+=y[n]*z;
        n--;
    }
    int first_item = items[0];
    string first_oper = oper[0] ;
    for(int i = 0; i < 100; i++)
    {

       cout << items[i] << "\t" << oper[i] << endl;
    }
    return 0;
}
int main()
{
    int t ;
    cin >> t ;
    string x ;
    while (t--)
    {
        cin >> x ;
//        cout << convert2int(x) << endl;
    }
    return 0;
}
