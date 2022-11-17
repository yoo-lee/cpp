#include<iostream>

using namespace std;

class Yu
{
 public:
    int n;
    Yu();
    Yu(int x);
};

Yu::Yu()
{
    cout << "1" << endl;
}

Yu::Yu(int x)
{
    n = x;
    cout << "num=" << n << endl;
}

int main ()
{
    Yu yu1;
    Yu yu(10);
    return 0;
}