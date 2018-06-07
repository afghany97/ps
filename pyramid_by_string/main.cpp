#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the string : ";
    string x; cin>>x;
    for(int i=0; i<x.length(); i++)
        {
        for(int j=i; j<x.length(); j++)
        {
            for(int k=j; k<x.length(); k++)
            {
                    cout<<x[k];
                }
            cout<<"  ";
        }

            cout<<"\n";
        }
}
