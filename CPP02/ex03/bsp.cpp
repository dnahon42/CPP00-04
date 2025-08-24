/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:08:40 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/24 15:54:38 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	sign(Point const &p, Point const &a, Point const &b)
{
	return (p.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat()
		- b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat())
		* (p.getY().toFloat() - b.getY().toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos, on_slope;
	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	on_slope = (d1 == 0 && Point::min(a.getX(), b.getX()) <= point.getX() && point.getX() <= Point::max(a.getX(), b.getX()))
			|| (d2 == 0 && Point::min(b.getX(), c.getX()) <= point.getX() && point.getX() <= Point::max(b.getX(), c.getX()))
			|| (d3 == 0 && Point::min(c.getX(), a.getX()) <= point.getX() && point.getX() <= Point::max(c.getX(), a.getX()));
	return (!(has_neg && has_pos) && !on_slope);
}
