#include <iostream>

using namespace std;

int main()
{
    int inter = 0 , gremio = 0 , draw = 0 , a;
    do
    {
        int x , y;
        cin >> x >> y;
        if (x > y)
        {
            inter++;
        }
        else if (x < y)
        {
            gremio++;
        }
        else
        {
            draw++;
        }
        jump:
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> a;
        if ( a != 1 && a != 2)
        {
            goto jump;
        }
    } while(a == 1);
    cout << inter + gremio << " grenais" << endl << "Inter:" << inter << endl << "Gremio:" << gremio << endl << "Empates:" << draw << endl << "Inter venceu mais" << endl;
    return 0;
}
