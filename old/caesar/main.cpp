#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(int n)
{
 string s;
 cin>>s;
    for (int i = 0 , l = s.length(); i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
        s[i]+=n;
        if (s[i] >= 123)
        {
            s[i]=97;
        }
        else if (s[i] >= 91)
        {
            s[i]=65;
        }
        printf("%c",s[i]);
        }
    }
    printf("\n");
}

