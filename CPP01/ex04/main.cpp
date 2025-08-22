/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:23:45 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 21:56:00 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{	
		if (verifInputFile(av[1]) == 1)
			return (1);
		if (sedFile(av[1], av[2], av[3]) == 1)
			return (1);
	}
	else
		std::cout << "Correct usage : ./replace filename string_to_replace replace_with" << std::endl;
}
