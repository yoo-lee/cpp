#include <iostream>

using namespace std;

class Zom
{
    public:
        Zom(string s);
        add(string s);
        int i;
        string str;
    private:
        string name;
};

Zom::Zom(string s)
{
    str = s;
}

Zom::add(string s)
{
    name = s;
}

int main ()
{
    string str;
    Zom obj("fdhoahd");
    // cout << obj.i << endl;
    // cout << obj.i << endl;
    obj.name = "abcd";
    cout << obj.str << endl;
    cout << obj.name << endl;
    return(0);
}
