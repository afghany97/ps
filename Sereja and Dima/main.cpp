#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cards, sereja = 0, dima = 0;
    bool turn = true;
    cin >> cards;
    int card[cards];
    int left = 0, right = cards - 1;
    for (int i = 0; i < cards; i++)
        cin >> card[i];
    while (left <= right)
    {
        if (card[left] > card[right])
        {
            if (turn)
                sereja += card[left];
            else
                dima += card[left];
            left++;
        }
        else
        {
            if (turn)
                sereja += card[right];
            else
                dima += card[right];
            right--;
        }
        if (turn)
            turn = false;
        else
            turn = true;
    }
    cout << sereja << "\t" << dima << endl;
}