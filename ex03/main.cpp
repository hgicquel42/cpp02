/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:55:37 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 18:08:56 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(const Point a, const Point b, const Point c, const Point p);

int	main(void)
{
	Point	a(0, 0);
	Point	b(1, 1);
	Point	c(2, 0);

	Point	d(1, 0.5);
	Point	e(2, 1);

	std::cout << "D" << d << " = " << (bsp(a, b, c, d) ? "true" : "false") << "\n";
	std::cout << "E" << e << " = " << (bsp(a, b, c, e) ? "true" : "false") << "\n";
	return (0);
}