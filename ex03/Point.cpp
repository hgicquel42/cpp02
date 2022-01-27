/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:39:41 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 17:24:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <algorithm>

Point::Point(void)
{}

Point::~Point()
{}

Point::Point(const float x, const float y):
	x(Fixed(x)),
	y(Fixed(y))
{}

Point::Point(const Point& from):
	x(from.getX()),
	y(from.getY())
{}

Point&	Point::operator=(const Point& from)
{
	const_cast<Fixed&>(this->x) = from.getX();
	const_cast<Fixed&>(this->y) = from.getY();
	return (*this);
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