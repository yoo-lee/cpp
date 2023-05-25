#include<iostream>

using namespace std;

class Y
{
    public:
    Y();
    ~Y();
};

Y::Y()
{
    cout << "constract" << endl;
}

Y::~Y()
{
    cout << "destruct" << endl;
}

int main ()
{
    Y y;
    return 0;
}