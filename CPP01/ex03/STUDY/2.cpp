#include <iostream>
using namespace std;

class U
{
    protected:
    int num2;
};

class U2 : public U
{
    public:
    int num;
};

int main ()
{
    U2 obj;
    obj.num = 10;
    obj.num2 = 20;
    cout << obj.num << endl;
    cout << obj.num2 << endl;
}