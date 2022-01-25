/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 13:29:23 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed(void):
	value(0)
{}

Fixed::~Fixed(void)
{}

Fixed::Fixed(Fixed const &from)
{
	(*this) = from;
}

Fixed::Fixed(const int value):
	value(value << this->bits)
{}

Fixed::Fixed(const float value):
	value(roundf(value * (1 << this->bits)))
{}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int value)
{
	this->value = value;
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float) this->value / (float) (1 << this->bits));
}

void	Fixed::operator=(Fixed const &from)
{
	this->value = from.getRawBits();
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->value == other.value);
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->value != other.value);
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (this->value < other.value);
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (this->value > other.value);
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->value >= other.value);
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() * other.getRawBits()) >> this->bits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() << this->bits) / other.getRawBits());
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	this->value++;
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	this->value--;
	return (old);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}


std::ostream&	operator<<(std::ostream &os, Fixed const &it)
{
	os << it.toFloat();
	return (os);
}