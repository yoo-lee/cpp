#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
// #include <locate>


size_t ft_strlen(char *s)
{
    int i;
    i = 0;
    while(s)
    {
        s++;
        i++;
    }
        return(i);
}

char ft_toupper(char c)
{
    return(c - ('Z' - 'z'));
}

int main (int ac, char **av)
{
    int i,j;
    i = 0;
    j = 0;

    // std::cout << "1";
    if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else

    while(i < ac)
    {
    std::cout << i << std::endl;
    std::string str(av[i]);
    i++;
    std::cout << str << std::endl;
    while(j < strlen(*av))
    {
    std::string str2;
    // int m;
    str2 = ft_toupper(str[j]);
    // std::cout << str[j] <<std:: endl;
    std::cout << str2;
    // std::cout << str[i][j] << std::endl;
    // std::cout << ft_toupper(av[i][j]) << std::endl;
    j++;
    }

    }
}
