#include <iostream>

using namespace std;

class zombie
{
    private:
        string m_name;
    public:
        zombie(string name);
};

zombie::zombie(string name)
{
    m_name = name;
}

int main ()
{
zombie yu;
}