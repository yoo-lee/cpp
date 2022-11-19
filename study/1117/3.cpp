#include<iostream>

using namespace std;

class U
{
    private:
        int n;
        public:
     U();
    ~U();
};

        U::U()
        {
            cout << 20 << endl;
        }

        U::~U()
        {
            cout << 30 << endl;
        }

        int main ()
        {
            U y;
            return 0;
        }