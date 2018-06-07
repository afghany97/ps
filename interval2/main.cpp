#include <iostream>

using namespace std;

int main()
{  cout<<"enter the number of test case \n";
   int t;  cin>>t;
    float a[t];
    int pos=0,neg=0;
    for(int i = 0; i < t; i++){
        cin>>a[i];
        if(a[i] >= 10 && a[i] <= 20){
            pos++;
        }
        else
            neg++;

    }
    cout<<pos<<" in\n";
    cout<<neg<<" out\n";
}
