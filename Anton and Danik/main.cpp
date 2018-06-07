#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number_of_games, anton = 0, danik = 0;
    cin >> number_of_games;
    char result_of_games[number_of_games];
    cin >> result_of_games;
    for (int i = 0; i < number_of_games; i++)
    {
        if (result_of_games[i] == 'A')
            anton++;
        else if (result_of_games[i] == 'D')
            danik++;
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
        cout << "Friendship" << endl;
}