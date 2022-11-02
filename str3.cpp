#include <stdio.h>
#include <iostream>
#include <string>
// #include <locate>

char ft_toupper(char c)
{
    return(c - ('Z' - 'z'));
}

int main (int ac, char **av)
{
    int i,j;
    i = 1;
    j = 0;

    // std::cout << "1";
    if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    while(i < ac)
    {
    std::string str(av[i]);
    i++;
    j++;
    std::cout << str << std::endl;
    std::cout << str[i][j] << std::endl;

    }
    // n = ft_toupper(m);
}
