#include <iostream>
using namespace std;
class S
{
    private:
     int i;
     string s;
    public:
     void   get(int x);
     int set();
};

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
        int res = y.set();
        cout << res << endl;
        return 0;
    }