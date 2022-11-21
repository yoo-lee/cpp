#include <iostream>

using namespace std;

class Zombie
{
	private:
		std::string m_name;
		std::string first_name;
		
	public:
		void announce();
		Zombie();
		Zombie(string name);
		~Zombie();
};

		Zombie::Zombie(string name)
		{
			m_name = name;
			cout << m_name << endl;
		}

void Zombie::announce( void )
{
    cout << "BraiiiiiiinnnzzzZ..." << endl;
}

int main ()
{
    Zombie zom;
    Zombie zom2;
	zom.Zombie();
    zom.Zombie("dfasf");
    // zom2.zom('d');
    // zom.announce();
    return 0;
}
