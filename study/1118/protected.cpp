#include <iostream>
using namespace std;

class old_sut
{
    protected:
        int num;
};

class new_sut : public old_sut
{
    public:
    void    set(int x);
};

void new_sut::set(int x)
{
    num =x;
    cout << num << endl;
}
int main ()
{
    new_sut obj;
    obj.set(10);
    return 0;
}
