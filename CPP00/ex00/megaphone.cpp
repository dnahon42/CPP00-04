/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:32:48 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 23:43:49 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        std::string str;
        std::string upper_str;

        for (int i = 1; i < ac; i++)
            str += av[i];
        for (int i = 0; str[i]; i++)
            upper_str += std::toupper(str[i]);

        std::cout << "Avant : " << str << std::endl;
        std::cout << "Apres : " << upper_str << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
