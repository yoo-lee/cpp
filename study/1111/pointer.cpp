#include<iostream>
using namespace std;

class sut
{
    public:
    int Number
};


void show(sut x)
{
        cout << x.Number << endl;
}

int main
{
    sut yu;
    yu.Number = 10;
    show(yu);
}
