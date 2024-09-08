#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t;
    int tt = 1;
    while(t--)
    {
        int h = 0 , l = 0;
        int n ;
        cin >> n;
        int k ;
        cin >> k;
        for(int i = 1; i < n; i++)
        {
            int j ;
            cin >> j;
            if(j > k)
            {
                h++;
            }
            else if (j < k)
            {
                l++;
            }
            k = j;
        }
        cout << "case " << tt << ":" << h << " " << l <<endl;
        tt++;
        }



    return 0;
}
