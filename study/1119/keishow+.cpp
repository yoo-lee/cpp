#include <iostream>

using namespace std;

class Y
{
    int n;
    public:
    void show();
};

    void Y:: show()
    {
        cout << n << endl;
    }

int main ()
{
    Y x;
    x.show();
}
