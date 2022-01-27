/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:47:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 16:34:01 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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

Fixed& Fixed::operator=(const Fixed& from)
{
	std::cout << "Assignation operator called" << "\n";
	this->raw = from.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << "\n";
	return (this->raw);
}

void	Fixed::setRawBits(const int raw)
{
	this->raw = raw;
}