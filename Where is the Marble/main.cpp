#include <iostream>

using namespace std;

int main()
{
    int n , q , test = 1 ;
    do
    {
        cin >> n >> q ;

        int marbles [n] ={0};

        int queries [q] ={0};

        for (int i = 0; i < n; i++)
            cin >> marbles [i];

        for(int i = 0; i < q; i++)
            cin >> queries [i];

        for(int i = 0; i < q; i++)
            for(int j = 0; j < n; j++)
            {
                if (queries[i] == marbles[j])
                {
                    cout << "CASE# " << test << ":" << queries[i] << "found at " << i+1 << endl;
                    break;
                }
            }
        test++;
    } while ( n != 0 && q != 0);
    return 0;
}
