#include <iostream>

using namespace std;

class S
{
    public:
     string s;
     void   S(string n);
    void S::print()
};

  void   S::S(string n)
     {
        s = n;
     }

    void S::print()
    {
        cout << s << endl;
    }
    int main ()
    {
        S y;
        S("dfadf");
        y.print();
        cout << y.s << endl;
        return 0;
    }