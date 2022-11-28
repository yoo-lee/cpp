#include <iostream>
using namespace std;

class old_sut
{
    public:
        int o_num;
        void show();
    void    set(int num);

};

class new_sut : public old_sut
{
    public:
        int n_num;
    old_sut old_sut[];
    void show();
};

    void old_sut::set(int num)
    {
        o_num = num;
    }

void old_sut::show()
{
    cout << o_num << endl;
}

void new_sut::show()
{
    cout << n_num << endl;
}

int main ()
{
    old_sut yukan;
    new_sut yukan2;
    yukan.set(20);
    yukan2.show();

    int i;
    old_sut sut[i];
    for (i = 0; i < 9; i++)
    sut[i];

    yukan.show();
    // cout << yukan.o_num << endl;
    return 0;
}
