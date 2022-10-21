#include <stdio.h>


int main(int ac, char **av)
{
	// *av = "dfoahdf";
	// printf("%p\n" , av);
	// printf("%s\n" , *av);
	while (*av)
	{
	printf("%s\n" , *av);
	av++;
	}
	// printf("%c\n" , **av);
	// int i;
	// while (av)
	// {
	// printf("%s\n" , av[i]);
	// i++;
	// }

// 	int i = 0;
// 	while (*av[i])
// 	{
// 		printf("%c", *av[i]);
// 		i++;
// 	}
// av[1] = "dnvao";
// av[2] = "dfanod";
// av[3] = "dnvao";

// *av
}


// つまり文字列の*av の一文字目が格納されている。

