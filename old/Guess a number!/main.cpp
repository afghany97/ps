#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int solution ;
    while(n--)
    {
        string x; cin >> x;
        int y ; cin >> y;
        char z; cin >> z;
        if (z=='N')
            continue;
        if(z=='Y')
           if (x.length() > 1)
                if (x[0] == ">")
                    solution = rand() % y;
                if(x[0] == "<")
                    solution =
            if(x.length() == 1)
                if(x[0])

    }
    return 0;
}
