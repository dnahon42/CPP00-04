/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:43:40 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 15:45:27 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");
	std::cout << std::endl;
	std::cout << std::endl;
	Scav.takeDamage(20);
	Scav.beRepaired(20);
	Scav.guardGate();
	Scav.attack("test");
	std::cout << std::endl;
	std::cout << std::endl;
	Clap.beRepaired(50);
	Clap.takeDamage(10);
	Clap.attack("test");
	std::cout << std::endl;
	std::cout << std::endl;
	Frag.highFiveGuys();
	Frag.takeDamage(20);
	Frag.beRepaired(20);
	std::cout << std::endl;
	std::cout << std::endl;
}
