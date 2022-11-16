#include <iostream>

using namespace std;
class Yu
{
    private:
    int i;
    string str;
    public:
    void    setnum(int x);
    int    getnum();
};

void    Yu::setnum(int x)
{
    i = x;
}

int  Yu::getnum()
{
    return i;
}

int main ()
{
    Yu yukan;
    yukan.setnum(25);
    int result = yukan.getnum();
    cout << result << endl;
}
