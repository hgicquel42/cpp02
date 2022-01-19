/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 12:44:00 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed(void):
	value(0)
{
	std::cout << "Default constructor called" << "\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(Fixed const &from)
{
	std::cout << "Copy constructor called" << "\n";
	this->value = from.getRawBits();
}

Fixed::Fixed(int value):
	value(value << this->bits)
{
	std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(float value):
	value(roundf(value * (1 << this->bits)))
{
	std::cout << "Float constructor called" << "\n";
}

void	Fixed::operator=(Fixed const &from)
{
	std::cout << "Assignation operator called" << "\n";
	this->value = from.getRawBits();
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