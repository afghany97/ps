#include <iostream>

using namespace std;

int main()
{
    double x[5];
    cout<<"enter numbers"<<endl;
    for (int i=0; i<5; i++)
    {
        cin>>x[i];
    }
    double max=0;
    for (int i=0; i<5; i++)
    {
        if (x[i]>max)
        {
        max=x[i];
        }
        cout<<"Only one number, the biggest one : "<<max;
    }
}
