#include <iostream>

using namespace std;

void f(int n)
{
    n *= 2;
}

int main ()
{
    int a, b;
    // int &r = a;
    a = 123;
    f(a);
    // r = 123;
    cout << a << endl;
    // cout << r << endl;
}
