/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:08:07 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/23 18:58:37 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	// std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const &other) : _x(other._x), _y(other._y)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed const &Point::getX() const
{
	return (this->_x);
}

Fixed const &Point::getY() const
{
	return (this->_y);
}

Fixed Point::max(Fixed const &number1, Fixed const &number2)
{
	if (number1 > number2)
		return (number1);
	else
		return (number2);
}

Fixed Point::min(Fixed const &number1, Fixed const &number2)
{
	if (number1 < number2)
		return (number1);
	else
		return (number2);
}
