/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:23:45 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/22 20:43:28 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{	
		if (av[2][0] == '\0')
		{
			std::cout << "String_to_replace must contain atleast 1 character" << std::endl;
			return (1);
		}
		if (verifInputFile(av[1]) == 1)
			return (1);
		if (sedFile(av[1], av[2], av[3]) == 1)
			return (1);
	}
	else
		std::cout << "Correct usage : ./replace filename string_to_replace replace_with" << std::endl;
}
