#include<iostream>

using namespace std;

class Yu
{
    private:
        string n;
    public:
        Yu();
        Yu(string  s);
        string get();
};

        Yu::Yu()
        {
            cout << "shit" << endl;
        }


        Yu::Yu(string  s)
        {
            n = s;
        }

        string Yu::get()
        {
            Yu y;
            return (y.n);
        }

int main ()
{
    Yu yu1;
    Yu yu2();
    // Yu yu3("dfhua");
    cout << yu2.get() << endl;
}
