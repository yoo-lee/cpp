#include <cstring>
#include <string>
#include <iostream>

using namespace std;
int main (int ac, char **av)
{
    int i,j;
    i = 1;
    while (i < ac)
    {
    int c;
    c = strlen(av[i]);
        j = 0;
        while (j < c)
        {
        cout <<(char) toupper(av[i][j]);
        j++;
        }
        cout << endl;
    i++;
    }
    return 0;
}
