#include <iostream>

using namespace std;

int main()
{
   float n[6];
   cout<<"enter the number \n";
   for(int i = 0; i < 6; i++)
    {
        cin>>n[i];
    }
   float sum=0;
   int counter=0;
   for(int i=0; i < 6 ; i++)
   {
       if(n[i]>0)
        {
            sum+=n[i];
            counter++;
       }
   }
   cout<<counter<<" valores positivos\n";
   cout<<sum/counter;
}
