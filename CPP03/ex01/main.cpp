/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:43:40 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/25 19:27:52 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");
	std::cout << std::endl;
	std::cout << std::endl;
	Scav.takeDamage(20);
	Scav.beRepaired(20);
	Scav.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	Clap.beRepaired(50);
	Clap.takeDamage(10);
	std::cout << std::endl;
	std::cout << std::endl;
}
