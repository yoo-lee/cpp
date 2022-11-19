#include<iostream>

using namespace std;

class Z
{
    private:
    string s;
    int n,m;
    public:
    Z();
    Z(char y);
    ~Z();
};

Z::Z()
{
    cout << "dfhoah" << endl;
}


Z::Z(char y)
{
    s = y;
    cout << s << endl;
}

Z::~Z()
{
    cout << 'd' << endl;
}

int main()
{
 Z x('a');
 Z y();
 return 0;   
}