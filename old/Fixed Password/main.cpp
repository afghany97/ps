#include <iostream>

using namespace std;

int main()
{
    int t = 2002;
    int pass;
    while (true)
    {
        cin >> pass;
        if (pass == t)
        {
            cout<<"Acesso Permitido"<<endl;
            return 0;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}
