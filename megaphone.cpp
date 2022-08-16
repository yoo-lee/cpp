#include <iostream>

int main (int ac, char **av)
{
	int i = 0;
	char c = '\0';

		printf("1\n");
	if (ac == 2)
	std::cout << "" << std::endl;
	if (ac == 3)
	std::cout << "" << std::endl;
	
	if (ac == 4 || av[4][i])
	{
		printf("%c", av[4][i]);
		i++;
		c = toupper(av[4][i]);
		std::cout << c << std::endl;
		return 0;
	}
	//toupper to be make upper words by one character

	std::cout << c << std::endl;
	return 0;
}