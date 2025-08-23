/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:17:15 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/23 18:57:53 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	// Point a;
	Point a(1.0f, 5.0f);
	Point b(3.0f, 0.0f);
	Point c(0.0f, 4.0f);
	Point PointOnLine(2.0f, 2.5f);
	Point PointInside(2.0f, 2.0f);
	Point PointOnVertex(3.0f, 0.0f);

	std::cout << "a: (" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
	std::cout << "b: (" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
	std::cout << "c: (" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
	
	std::cout << "PointOnLine: (" << PointOnLine.getX().toFloat() << ", " << PointOnLine.getY().toFloat() << ")" << std::endl;
	std::cout << "Result : " << bsp(a, b, c, PointOnLine) << std::endl;
	
	std::cout << "PointInside: (" << PointInside.getX().toFloat() << ", " << PointInside.getY().toFloat() << ")" << std::endl;
	std::cout << "Result : " << bsp(a, b, c, PointInside) << std::endl;
	
	std::cout << "PointOnVertex: (" << PointOnVertex.getX().toFloat() << ", " << PointOnVertex.getY().toFloat() << ")" << std::endl;
	std::cout << "Result : " << bsp(a, b, c, PointOnVertex) << std::endl;
}
