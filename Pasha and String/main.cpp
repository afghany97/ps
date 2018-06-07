#include <iostream>

using namespace std;

string s ;

void swap(int a , int b)
{
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}
int main()
{
    cin >> s;
    int end = s.length();
    int m , a;
    int last = end / 2 ;
    cin >> m;
    while(m--)
    {
        cin >> a;
        while(a <= last)
        {
            swap(a - 1, end -a);
            a++;
        }
    }
    cout << s << endl;
    return 0;
}
