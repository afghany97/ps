#include <iostream>
using namespace std;
int main()
{
    test:
    cout<<"enter the number\n";
    long long x; cin>>x;
    if(x<0){
        goto test;
}
    long long y=x;
    int number[16];
    for(int i=0; i<16; i++){
        number[i]=x%10;
        x/=10;
}
    int sum=0;
    for(int i=1; i<16; i+=2){
    if(number[i]*2<9){
    sum+=number[i]*2;
}
    else sum+=number[i]/10+number[i]%10;
}
if(sum&2==0){
    cout<<"Invalid Number\n";
}
else {
    for(int i=0; i<16; i+=2){
        sum+=number[i];
}
    while(y>99){
    y/=10;
}
    if(y==4){
    cout<<"Visa\n";
}
    else if (y==34 || y==37){
        cout<<"Amex\n";
}
else if(y>=51 &&y<=55){
    cout<<"MasterCard\n";
}
}
}
