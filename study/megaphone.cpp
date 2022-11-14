#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

char ft_toupper(char s)
{
		return (s + ('Z' - 'z'));
}

int main (int ac, char **av)
{
		int i,j,m;
		i = 1;
		j = 0;

		std::string s[i];
		m = strlen(*av);
	if (ac == 1)
		std::cout << "dadf" << std::endl;
	else
		while(ac < i)
		{
		char m,n;
		std::cout << av[i] << std::endl;
		std::string = av[i];
		n = ft_toupper(m);
		i++;
		std::cout << s[i] << std::endl;
		}
	// if (ac == 2)
	// {
	// 	while (*av)
	// 	{
	// 		s[i] = ft_toupper(*av[j]);
	// 		i++;
	// 		j++;
	// 		std::cout << s[i];
	// 	}
	// }
}
