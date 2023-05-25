#include<iostream>
#include<string>

using namespace std;

class Z
{
    private:
    string s;
    char *s2;
    int n,m;
    public:
    Z();
    Z(char *y);
    Z(string x);
    ~Z();
};

    Z::Z(string x)
    {
        s = x;
        cout << s << endl;
    }

Z::Z(char *y)
{
    s2 = y;
    cout << s2 << endl;
}

Z::~Z()
{
    cout << 'd' << endl;
}

int main()
{
 Z y();
 Z x("dfaf");
 return 0;   
}