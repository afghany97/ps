#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c < 4 || a < 1 || b < 2)
    {
        cout << "0" << endl;
        return 0;
    }
    int ap = a / 1;
    int bp = b / 2;
    int cp = c / 4;
    int operation;
    if (ap < cp && ap < bp)
    {
        operation = ap;
    }
    else if (cp < ap && cp < bp)
    {
        operation = cp;
    }
    else
        operation = bp;
    int solution = (operation * 1) + (operation * 2) + (operation * 4);
    cout << solution << endl;
    return 0;
}