#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string name;
    cin>>name;
    float total_sales;
    cin>>total_sales;
    float bouns;
    cin>>bouns;
    float tbouns = bouns * 15.0 / 100.0;
    float total = total_sales + tbouns;
    int itotal = total;
    cout<<total<<"\t"<<itotal<<endl<<endl;
    float process = total - itotal;
    if ( process > 0.9)
    {
        int i=0;
        while(process < 9)
        {
            process*=pow(process,i);
            i++;
        }
        cout<<"TOTAL = R$ "<<itotal<<'.'<<(int)process<<endl;
    }
    else
    {
        cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
    }
}
