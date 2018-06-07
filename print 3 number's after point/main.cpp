#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //print 3 number's after the point
    double x;
    cin>>x;
    double y=pow(x,3);
    double p=13.412857;
    double xx=4.0/3;
    x=y*p*xx;
    int m=x;
    float z=x-m;
    int i=1;
    while(z<=99)
    {
        z*=pow(10,i);
        i++;
    }
    int n=z;
    cout<<m<<"."<<n<<endl;
}
