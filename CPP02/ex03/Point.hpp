/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:59:49 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/23 18:50:28 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
  private:
	Fixed const _x;
	Fixed const _y;

  public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const &other);
	~Point(void);

	Fixed const &getX() const;
	Fixed const &getY() const;
	static Fixed max(Fixed const &number1, Fixed const &number2);
	static Fixed min(Fixed const &number1, Fixed const &number2);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
float	sign(Point const &p, Point const &a, Point const &b);

#endif
