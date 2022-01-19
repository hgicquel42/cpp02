/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 12:59:25 by hgicquel         ###   ########.fr       */
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
	this->value = from.getRawBits();
}

Fixed::Fixed(int value):
	value(value << this->bits)
{}

Fixed::Fixed(float value):
	value(roundf(value * (1 << this->bits)))
{}

void	Fixed::operator=(Fixed const &from)
{
	this->value = from.getRawBits();
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->value == other.value);
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
	result.setRawBits(this->getRawBits() * other.getRawBits());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() / other.getRawBits());
	return (result);
}

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

std::ostream&	operator<<(std::ostream &os, Fixed const &it)
{
	os << it.toFloat();
	return (os);
}