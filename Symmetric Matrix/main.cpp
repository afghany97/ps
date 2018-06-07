#include <iostream>

using namespace std;

int main()
{
   int t ;
   cin >> t ;
   for (int i = 1; i <= t; i++)
   {
       int n , pos = 0 , neg = 0;
       cout << "N = ";
       cin >> n ;
       int arr [n] [n];
       for(int j = 0; j < n; j++)
       {
           for (int k = 0; k < n; k++)
           {
               cin >> arr[j][k];
           }
       }
        for(int j = 0; j < n; j++)
        {
           for (int k = 0; k < n; k++)
           {
               if (arr[j] [k] < 0)
               {
                   neg=1;
               }
           }
        }
           if(arr[0] [0] == arr[n-1] [n-1] && arr[n-1] [0] == arr [0] [n-1] && neg == 0)
           {

                cout << "Test #" << i << ": " << "Symmetric." << endl;
           }
           else
           {
                cout << "Test #" << i << ": " << "Non-symmetric." << endl;
           }
    }
    return 0;
}
