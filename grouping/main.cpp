#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the string : ";
    string x; cin>>x;
    char y=x[0];
    for(int i=0; i<x.length(); i++){
    if(y==x[i]){
        cout<<x[i];
}
    else{
    cout<<" "<<x[i];
    y=x[i];
}

}
}

