/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:15:01 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/23 17:00:38 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl Harl;

		Harl.complain(av[1]);
	}
	else
		std::cout << "Usage : ./Harl level" << std::endl;
}