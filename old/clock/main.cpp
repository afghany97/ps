    #include <iostream>
    using namespace std;
    int main()
    {
        int n,internalcounter=1,counter=0,key;
        cout<<"enter the length of array \n";
        cin>>n;
        int arr[n];
        cout<<"enter the key : ";
        cin>>key;
        cout<<"enter the number's of array \n";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(internalcounter==key)
            {
                if (arr[i] == -1)
                {
                    internalcounter=1;
                    continue;
                }
                if(arr[i]!=-1)
                {
                    counter++;
                    arr[i]=-1;
                }
                internalcounter=0;
            }
            internalcounter++;
            if(i==n-1)
            {
                i=0; //re
            }
            if(counter==n-1)
            {
                i=n+1;
            }
        }
        for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
            }}

