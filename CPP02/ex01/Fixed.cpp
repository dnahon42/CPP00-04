/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:17:14 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/22 21:03:38 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _number = 0;
}

Fixed::Fixed(const Fixed& nb)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = nb;
}

Fixed::Fixed (const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(nb << _bit);
}

Fixed::Fixed (const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(nb * (1 << this->_bit)));
}

Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_number = other.getRawBits();
    return (*this);
}

std::ostream&   operator<<(std::ostream &os, Fixed const &r)
{
    return (os << r.toFloat());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    return (this->_number);
}

void Fixed::setRawBits(int const raw)
{
    this->_number = raw;
}

float Fixed::toFloat() const
{
    return ((float)_number / (1 << _bit));
}

int Fixed::toInt() const
{
    return (getRawBits() >> _bit);
}
