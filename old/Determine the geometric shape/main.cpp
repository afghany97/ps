#include <iostream>

using namespace std;

int main(void)
{
    cout<<"enter the first length";
    double length1; cin>>length1;
    cout<<"enter the first width";
    double width1; cin>>width1;
    cout<<"enter the second length";
    double length2; cin>>length2;
    cout<<"enter the second width";
    double width2; cin>>width2;
    if (length1==width1 && length2== width2)
    {
        cout<<"square";
    }
    else if (length1==length1 && width1==width2)
    {
        cout<<"rectangle";
    }
    else if (length1!=length2&& length2!=width1 && width1!=width2)
    {
            cout<<"quadrangle";
    }
        else
            cout<<"banana";
}
