/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:42:58 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/24 14:43:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	private:
		int					value;
		static const int	bits;
	public:	
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed& from);
		void	operator=(Fixed& from);
		int		getRawBits(void) const;
		void	setRawBits(int value);
};