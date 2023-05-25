#include<iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;
int main (int ac, char **av)
{
    const char *s = "adfad";
    int *m;
    int i, j;
    i = 0;
    j = 0;

    while(s[i])
    {
    m[j] = toupper(s[i]);
    j++;
    s++;
    }
    cout << s << endl;
    cout << m << endl;
}
