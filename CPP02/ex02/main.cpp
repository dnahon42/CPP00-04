/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:17:15 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/24 16:06:31 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed d(Fixed(10));
	Fixed e(Fixed(2.5f));
	Fixed const b(Fixed(5.05f) * Fixed(2));
	// std::cout << (a < b) << std::endl;
	// std::cout << (a > b) << std::endl;
	// std::cout << (a >= b) << std::endl;
	// std::cout << (a <= b) << std::endl;
	// std::cout << (d / e) << std::endl;
	// std::cout << (d * e) << std::endl;
	// std::cout << (d + e) << std::endl;
	// std::cout << (d - e) << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}