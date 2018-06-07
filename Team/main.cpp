#include <bits/stdc++.h>

using namespace std;

int main()
{
    int problems, petya, vasya, tonya, soulution = 0;
    cin >> problems;
    while (problems--)
    {
        cin >> petya >> vasya >> tonya;
        if(petya + vasya + tonya >= 2)
            soulution++;
    }
    cout << soulution << endl;
}