#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main ()
{
// char *s;
// char *d;
// scanf("%c", d);
    printf("%c\n", ft_toupper(90));
}
