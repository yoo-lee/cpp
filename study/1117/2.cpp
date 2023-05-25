#include <iostream>
using namespace std;

class S
{
    private:
        int i;
         string s;
    public:
        void   get(const char* x);
        string set();
};


     void  S::get(const char* x)
     {
        s = x;
     }

     string S::set()
    {
        return s;
    }

    int main ()
    {
        S y;
        y.get("dfaf");
        cout << y.set() << endl;
    }