/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:42:58 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/18 19:23:02 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bits;
	public:	
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &from);
		Fixed(int value);
		Fixed(float value);
		void 	operator=(Fixed const &from);
		int		getRawBits(void) const;
		void	setRawBits(int value);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& os, Fixed const &it);