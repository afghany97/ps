#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    float r = 0 , c = 0 , s = 0;
    while (t--)
    {
        int n;
        cin >> n;
        char nn ;
        cin >> nn;
        if (nn == 'R')
        {
            r+=n;
        }
        else if (nn == 'C')
        {
            c+=n;
        }
        else if (nn == 'S')
        {
            s+=n;
        }
    }
    int total = r + c + s ;
    cout << "Total: " << total << " cobaias" << endl << "Total de coelhos: " << c << endl << "Total de ratos: " << r << endl << "Total de sapos: " << s << endl;
    float cr , rr , sr;
    cr = c * 100 / total;
    rr = r * 100 / total;
    sr = s * 100 / total;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << cr << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << rr << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << sr << " %" << endl;
    return 0;
}
