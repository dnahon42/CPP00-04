/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:17:13 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/23 17:02:11 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int _number;
	static int const _bit = 8;

  public:
	Fixed(void);
	Fixed(const Fixed &nb);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed(void);

	Fixed &operator=(const Fixed &other);
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);

	Fixed &operator++();
	Fixed operator++(int nb);
	Fixed &operator--();
	Fixed operator--(int nb);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed min(Fixed &number1, Fixed &number2);
	static Fixed min(const Fixed &number1, const Fixed &number2);
	static Fixed max(Fixed &number1, Fixed &number2);
	static Fixed max(const Fixed &number1, const Fixed &number2);
};

std::ostream &operator<<(std::ostream &os, Fixed const &r);

#endif