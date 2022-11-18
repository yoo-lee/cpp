#include <iostream>

using namespace std;

class Z
{
    string name;

}

class Yu
{
    private:
        int i;
        string str;
    public:
        void    set(char s);
        string     get();
};

void    Yu::set(char s)
{
    if('a'< s && s <'z')
        str = s;
    else
        str = "shit";
}

string Yu::get()
{
    return str;
}


int main ()
{
    Yu yukan;
    char s;
    cin >> s;
    yukan.set(s);
    cout << yukan.get() << endl;
    return 0;
}
