#include <iostream>

#include <cmath>

#include <cstring>

using namespace std;

int main()
{
    int n , counter = 1;
    do
    {
        int sum [10] ={0} ;

        cin >> n ;

        int arr[n] [n] ;

        for (int i = 0; i < n; i++)

            for(int j = 0; j < n; j++)

                cin >> arr[i][j];

            if (n > 1)
            {
                for (int i = 0; i < n; i++)

                    for(int j = 0; j < n; j++)
                    {
                        sum[0]+=arr[i][j];

                        if (i == 0)

                            if (j == n - 1)

                                i = n - 2;

                    }
                for (int i = 0; i < n; i++)

                    for (int j = 0; j < n; j++)
                    {
                        if (j < 1 && i > 0 && i < n - 1)

                            sum[0]+= arr[i][j];

                        if (j == n - 1 && i < n - 1 && i > 0)

                            sum[0]+= arr[i][j];
                    }
                for (int i = 1; i < n-1; i++)

                    for(int j = 1; j < n-1; j++)
                        {

                            if (i == floor (n/2) && j == floor(n/2))
                            {

                                continue;
                            }
                            sum[1]+=arr[i] [j];
                        }

                int nn = floor (n/2) ;

                sum[2]+= arr[nn] [nn] ;
            }
            else
            {
                sum[0]=arr[0][0];
            }

                cout << "Case " << counter << ": " ;

                for ( int i = 0; i < 10; i++)
                {
                    if (sum[i] > 0)
                    {
                        cout << sum[i] << " " ;
                    }

                cout << endl;

                counter++;
                }


        } while (n != 0);

    return 0;
}
