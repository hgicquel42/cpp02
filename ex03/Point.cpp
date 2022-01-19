/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:39:41 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 18:47:27 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{}

Point::~Point()
{}

Point::Point(const Point& from):
	x(from.x),
	y(from.y)
{}

Point::Point(const float x, const float y):
	x(Fixed(x)),
	y(Fixed(y))
{}

Point&	Point::operator=(Point& from)
{
	return (from);
}

const Fixed&	Point::getX(void) const
{
	return (this->x);
}

const Fixed&	Point::getY(void) const
{
	return (this->y);
}

std::ostream&	operator<<(std::ostream &os, Point const &it)
{
	os << "(" << it.getX() << ", " << it.getY() << ")";
	return (os);
}