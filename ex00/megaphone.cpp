/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:27:22 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/11/05 15:28:47 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>

size_t ft_strlen(char *s)
{
    int i;
    i = 0;
    while(s)
    {
        s++;
        i++;
    }
    return(i+1);
}

char ft_toupper(char c)
{
    return(c + ('Z' - 'z'));
}

int main (int ac, char **av)
{
    int i,j;
    i = 1;

    if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else

    while(i < ac)
    {
    j = 0;
    std::cout << "i ="<< i <<std::endl;
    std::string str(av[i]);
    std::cout << str << std::endl;
    std::cout << std::endl;
        i++;
        while(j < str.length())
        {
        std::string str2;
        // std::cout << "j =" << j <<std::endl;
        str2 = (char)ft_toupper(str[j]);
        // std::cout << str[j] <<std:: endl;
        j++;
        std::cout << str2;
        // std::cout << str[i][j] << std::endl;
        // std::cout << ft_toupper(av[i][j]) << std::endl;
        }
        std::cout << std::endl;
    }
        return(0);
}
