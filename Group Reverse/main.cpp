#include <iostream>
using namespace std;
bool found=false;
int main()
{
    int t;

    long long arr[101][101];
    cin>>t;
    for(int i=1;i<=t;i++) {
        int n;
        cin >> n;
        if ( n % 2 == 0 ) { cout << "Test #" << i << ": Non-symmetric." << endl; }
        else {
            for ( int j = 0 ; j < n ; j++ ) {
                for ( int k = 0 ; k < n ; k++ ) {
                    cin >> arr[ j ][ k ];
                }
            }
            for ( int j = 0 ; j <= n / 2 ; j++ ) {
                for ( int k = 0 ; k < n ; k++ ) {
                    if ( j == n / 2 && k == n / 2 &&  arr[ j ][ k ] >=0) {
                        break;
                    }
                    if(arr[ j ][ k ] == arr[ n - 1 - j ][ n - 1 - k ]  && arr[ j ][ k ] >= 0) continue;
                    else  {
                        cout << "Test #" << i << ": Non-symmetric." << endl;
                        j = n;
                        found = true;
                        break;
                    }
                }
            }
            if ( !found ) cout << "Test #" << i << ": Symmetric." << endl;
            found = false;
        }
    }
return 0;
}