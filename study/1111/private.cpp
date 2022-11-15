#include <iostream>

using namespace std;

class Zom
{
    public:
    int i;
    string str;
};

int main ()
{
    // Zom yu[3];
    Zom *yu ,t;
    // int i = 0;
    yu = &t;
        (*yu).str = "dfhak";
    // (*yu).str = 10;
    // cout << yu->i << endl;
    cout << (*yu).str << endl;
}
