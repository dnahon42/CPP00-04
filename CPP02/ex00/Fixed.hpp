/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:17:13 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/23 17:01:48 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int _number;
	static int const _bit = 8;

  public:
	Fixed(void);
	Fixed(const Fixed &nb);
	Fixed &operator=(const Fixed &other);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif