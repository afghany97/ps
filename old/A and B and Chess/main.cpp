#include <iostream>

using namespace std;

int main()
{
    string x ;
    int white =0 , black = 0 ;
    for (int j = 0; j < 8; j++)
    {
        cin >> x;
        for(int i = 0; i < x.length(); i++)
        {

            if (x[i] == 'Q')
                white+= 9;
            else if (x[i] == 'R')
                white+=5;
            else if (x[i] == 'B')
                white+=3;
            else if (x[i] == 'N')
                white+=3;
            else if (x[i] == 'P')
                white+=1;
            else if (x[i] == 'q')
                black+=9;
            else if (x[i] == 'r')
                black+=5;
            else if (x[i] == 'b')
                black+=3;
            else if (x[i] == 'n')
                black+=3;
            else if (x[i] == 'p')
                black+=1;
        }
    }
    if (white > black)
        cout << "White" << endl;
    if (black > white)
        cout << "Black" << endl;
    if (black == white)
        cout << "Draw" << endl;
    return 0;
}
