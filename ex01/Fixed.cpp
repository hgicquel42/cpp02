/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 16:35:22 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed(void):
	raw(0)
{
	std::cout << "Default constructor called" << "\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(const Fixed& from)
{
	std::cout << "Copy constructor called" << "\n";
	(*this) = from;
}

Fixed::Fixed(const int value):
	raw(value << this->bits)
{
	std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float value):
	raw(roundf(value * (1 << this->bits)))
{
	std::cout << "Float constructor called" << "\n";
}

Fixed&	Fixed::operator=(const Fixed& from)
{
	std::cout << "Copy assignment operator called" << "\n";
	this->raw = from.getRawBits();
	return (*this);
}

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

std::ostream&	operator<<(std::ostream &os, const Fixed& it)
{
	os << it.toFloat();
	return (os);
}