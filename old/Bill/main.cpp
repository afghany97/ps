#include <iostream>

using namespace std;

int main()
{

    int c , s;
    cout<<"enter the number of test case : ";
    cin>>c;
    for (int i = 0; i < c; i++){
            cout<<"enter the number : ";
    cin>>s;
        if(s % 2 == 0){
            cout<<"0\n";
        }
        else
            cout<<"1\n";
    }

}
