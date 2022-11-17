#include <iostream>
using namespace std;
class old_sut
{
    public:
        int num;
        void show();
};

void old_sut::show()
{
    cout << num << endl;
}

class new_sut : public old_sut
{
    public:
        int num2;
};

int main ()
{
    new_sut yukan;
    yukan.num = 10;
    yukan.num2 = 24;
    yukan.show();
    cout << yukan.num2 << endl;
    return 0;
}
