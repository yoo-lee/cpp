#include <iostream>
using namespace std;

class S
{
    private:
     int i;
    public:
     string s;
     void   get(int x);
     void   S(string n);
     int set();
};

     void   S::S(string n)
     {
        s = n;
     }
    void S::get(int x)
    {
        i = x;
    }

    int S::set()
    {
        return (i);
    }

    int main ()
    {
        S y;
        y.get(25);
        S("dfadf");
        cout << y.s << endl;
        int res = y.set();
        cout << res << endl;
        return 0;
    }