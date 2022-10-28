#include<iostream>
using namespace std;

 int main (int ac, char **av)
{
    int i = 0;

    while(i < ac)
    {
    cout << *av++ << endl;
    cout << **av++ << endl;
    }
    return 0;
}