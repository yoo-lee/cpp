#include <iostream>
#include <string>

using namespace std;

class Yana
{
        int n;
    public:
        Yana();
        Yana(int x);
};

Yana::Yana(int x)
{
    n = x;
}
int main ()
{
    Yana x;
    cout << x.Yana(10);
}
