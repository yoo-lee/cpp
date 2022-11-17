#include <iostream>

using namespace std;

class Zombie
{
	private:
		std::string name;
	public:
		void announce();
		Zombie();
		~Zombie();
};

void Zombie::announce( void )
{
    cout << "BraiiiiiiinnnzzzZ..." << endl;
}

int main ()
{
    Zombie zom;
    // zom.Zombie("dfasf");
    zom.announce();
    return 0;
}
