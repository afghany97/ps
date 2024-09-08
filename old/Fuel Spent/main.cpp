#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float hour , speed;
    cout<<"enter the speed : ";
    cin>>speed;
    cout<<"enter the hours : ";
    cin>>hour;
    float c = hour * (speed / 12) ;
    printf("%.3f \n",c);
}
