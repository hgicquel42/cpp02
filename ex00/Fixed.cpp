/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 12:43:14 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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

Fixed::Fixed(Fixed &from)
{
	std::cout << "Copy constructor called" << "\n";
	this->value = from.getRawBits();
}

void Fixed::operator=(Fixed& from)
{
	std::cout << "Assignation operator called" << "\n";
	this->value = from.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << "\n";
	return (this->value);
}

void	Fixed::setRawBits(int value)
{
	this->value = value;
}