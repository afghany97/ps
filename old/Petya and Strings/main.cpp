#include <bits/stdc++.h>

using namespace std;

int main()
{
    string first_string, second_string;
    cin >> first_string >> second_string;
    transform(second_string.begin(), second_string.end(), second_string.begin(),(int (*)(int))tolower);
    transform(first_string.begin(), first_string.end(), first_string.begin(),(int (*)(int))tolower);
    if (first_string == second_string)
        cout << "0" << endl;
    else if (first_string < second_string)
        cout << "-1" << endl;
    else
        cout << "1" << endl;
}