#include<iostream>

using namespace std;

class U
{
    private:
        int n;
        string s;
        public:
        U();
        U(int x);
        ~U();
        void announce();
};
        

        U::U()
        {
            // cout << 20 << endl;
        }

        U::U(int x)
        {
            n = x;
            cout << n << endl;
        }

        U::~U()
        {
            cout << "decon" << endl;
        }

        int main ()
        {
            U y();
            U y3(39);
            U y2(25);
            return 0;
        }