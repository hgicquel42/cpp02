/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:36:17 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 18:46:08 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed	y;
	public:
		Point(void);
		~Point(void);
		Point(const Point& from);
		Point(const float x, const float y);
		Point&	operator=(Point& from);
		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

std::ostream&	operator<<(std::ostream &os, Point const &it);