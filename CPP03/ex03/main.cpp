/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:43:40 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 17:26:21 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Shape;

	DiamondTrap Diamond("Diamond");
	std::cout << std::endl;
	std::cout << std::endl;
	Diamond.whoAmI();
	Diamond.attack("test");
	Diamond.beRepaired(1);
	Diamond.takeDamage(1);
	std::cout << std::endl;
	std::cout << std::endl;
	Shape.attack("test");
	Shape.beRepaired(1);
	Shape.takeDamage(1);
	std::cout << std::endl;
	std::cout << std::endl;
}
