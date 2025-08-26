/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:43:40 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/25 18:53:29 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");
	ClapTrap ClapTrap(Clap);

	std::cout << std::endl;
	ClapTrap.attack("test");
	ClapTrap = Trap;
	ClapTrap.attack("test");
	std::cout << std::endl;
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	Clap.attack("test");
	// Clap.attack("test");
	// Clap.attack("test");
	// Clap.attack("test");
	std::cout << std::endl;
	Trap.takeDamage(20);
	Trap.takeDamage(20);
	std::cout << std::endl;
	Trap.beRepaired(20);
	Clap.beRepaired(20);
	std::cout << std::endl;
	std::cout << std::endl;
}
