
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class Zombie
{
	private:
		string z_name;
	public:
		Zombie();
		Zombie(string name);
		Zombie* zombie( int N, std::string name );
		// void printzombie();
		// ~Zombie();
};
		Zombie::Zombie(string name)
        {
            z_name = name;
            cout << z_name << endl;
        }

		Zombie::Zombie()
        {

        }

		// void Zombie::printzombie(string name)
        // {
        //     z_name = name;
        //     cout << z_name << endl;
        // }

Zombie* Zombie::zombie( int N, std::string name )
{
    int i;
    Zombie *zombie = new Zombie[i];
    for(i = 0; i < N; i++)
    zombie[i] = Zombie(name);
    cout << zombie[0];
    return (zombie);
}
void Zombie::Zombie(std::string name)
{
	this->name = name;
}

int main(void)
{
	int N = 10;
	Zombie* zombies = zombie(N,"Zombie");

	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
