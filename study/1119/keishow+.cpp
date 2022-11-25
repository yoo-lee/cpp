#include <iostream>

using namespace std;

class Y
{
    int n;
    string yname;
    public:
    void show();
    Y();
    Y(string n);
};

Y::Y()
{
    
}

Y::Y(string n)
{
    yname = n;    
}

    void Y:: show()
    {
        cout << n << endl;
        cout << yname << endl;
    }

int main ()
{
    Y x;
    x.("dfja");
    x.show();
}
