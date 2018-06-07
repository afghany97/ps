#include <iostream>

using namespace std;

int main()
{
    int arr [3];
    cout<<"enter the element's of array \n";
    for(int i = 0; i < 3; i++){
        cin>>arr[i];
    }
    int arr2 [3];
    for(int i = 0; i < 3; i++){
        arr2[i]=arr[i];
    }
    int temp;
    for (int i = 0; i < 3; i++){
        for (int j = i+1; j < 3; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" \n";
    }
    for(int i = 0; i < 3; i++){
        cout<<arr2[i]<<" \n";
    }

}
