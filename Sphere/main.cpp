#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    cin>>r;
    double pi=3.14159;
    double total=pi * 4/3.0 * pow(r,3);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<total<<endl;
    return 0;
}
