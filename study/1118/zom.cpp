#include <iostream>
using namespace std;

class Zombie
{
    private:
    string name;
    public:
    Zombie(string name);
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
};

    Zombie(string name);
    {
        name = name;
    }


    Zombie* newZombie( std::string name )
    {
        return(name);
    }

    void Zombie::announce( void )
    {
        cout << " da" << endl;
    }

int main ()
{
    Zombie new_zom;
    // new_zom.Zombie("dfa")
    new_zom.announce();
    new_zom.newZombie("dfanol");
}
