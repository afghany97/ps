#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>> n ;
    int hour = 3600;
    int men = 60;
    cout<<n/hour<<":"<<n % hour / men <<":"<< n % hour % men <<endl;
    return 0;
}
