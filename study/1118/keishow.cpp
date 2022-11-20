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
    new_sut yukan, yukan2;
    yukan.num = 10;
    yukan.num2 = 24;
    yukan2.num = 45;
    yukan.show();
    yukan2.show();
    cout << yukan.num2 << endl;
    return 0;
}
