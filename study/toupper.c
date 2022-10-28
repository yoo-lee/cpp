#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main (int ac, char **av)
{
char *s;
char *d;
// scanf("%c", d);
    printf("%c", ft_toupper(*av));
}
