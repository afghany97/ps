#include <iostream>
using namespace std;
int main (){
cout<<"enter the length of array"<<endl;
int n,internalcounter=1,counter=0;
int arr[100];
cin>>n;
arr[n];
cout<<"enter the number's of array"<<endl;
for(int i=0; i<n; i++){
cin>>arr[i];
}
int x=1;
while (x>0){
for(int i=0; i<n; i++){
if(internalcounter==3){
if(arr[i]==-1){
i++;
}
arr[i]=-1;
counter++;
internalcounter=1;
}
internalcounter++;
}
if(counter==n-2){
x=-1;}
}
system("puase");
}
