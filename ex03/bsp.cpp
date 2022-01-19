/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:05:14 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 18:38:43 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	abs(const Fixed x)
{
	if (x.getRawBits() >= 0)
		return (x);
	else
		return (-x);
}

Fixed	area(const Point a, const Point b, const Point c)
{
	Fixed	q = a.getX() * (b.getY() - c.getY());
	Fixed	r = b.getX() * (c.getY() - a.getY());
	Fixed	s = c.getX() * (a.getY() - b.getY());
	return abs((q + r + s) / Fixed(2.0f));
}

bool bsp(const Point a, const Point b, const Point c, const Point p)
{
	Fixed	a0 = area(a, b, c);
	Fixed	a1 = area(p, b, c);
	Fixed	a2 = area(a, p, c);
	Fixed	a3 = area(a, b, p);

	return (a0 == (a1 + a2 + a3));
}