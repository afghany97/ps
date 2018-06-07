#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double r ;
   cin >> r ;
   float pi = 3.14159;
   double area = r * r * pi ;
   cout<<fixed<<setprecision(4)<<"A="<<area<<endl;
    return 0;
}
