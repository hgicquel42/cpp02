/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 13:45:06 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed(void):
	raw(0)
{}

Fixed::~Fixed(void)
{}

Fixed::Fixed(const Fixed& from)
{
	(*this) = from;
}

Fixed::Fixed(const int value):
	raw(value << this->bits)
{}

Fixed::Fixed(const float value):
	raw(roundf(value * (1 << this->bits)))
{}

int	Fixed::getRawBits(void) const
{
	return (this->raw);
}

void	Fixed::setRawBits(const int raw)
{
	this->raw = raw;
}

int	Fixed::toInt(void) const
{
	return (this->raw >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float) this->raw / (float) (1 << this->bits));
}

void	Fixed::operator=(const Fixed& from)
{
	this->raw = from.getRawBits();
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->getRawBits() != other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() * other.getRawBits()) >> this->bits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() << this->bits) / other.getRawBits());
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	this->raw++;
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	this->raw--;
	return (old);
}

Fixed const	&Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(const Fixed& a, const Fixed& b)
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

std::ostream&	operator<<(std::ostream &os, const Fixed& it)
{
	os << it.toFloat();
	return (os);
}