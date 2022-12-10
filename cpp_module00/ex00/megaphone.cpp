/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:20:17 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/10 16:28:08 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string.h>

void    ft_megaphone(char **tab)
{
    int   i;
    int   len;

    i = 1;
    while (tab[i])
    {
        len = strlen(tab[i]);
        for(int j = 0; j < len; j++)
            tab[i][j] = std::toupper(tab[i][j]);
        std::cout << tab[i];
        i++;
    }
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        ft_megaphone(av);
        return (EXIT_SUCCESS);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (EXIT_FAILURE);
}