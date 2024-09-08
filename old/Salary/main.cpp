#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number;
    float hours , salary;
    cin>>number;
    cin>>hours;
    cin>>salary;
    float total = hours * salary;
    cout<<"number = "<<number<<'\n'<<"SALARY = U$ "<<fixed<<setprecision(2)<<total<<endl;
}
