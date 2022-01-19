/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:55:37 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 14:26:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	a = Fixed(0.01f);

	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";

	std::cout << "a == b " << ((a == b) ? "true" : "false") << "\n";
	std::cout << "b == a " << ((b == a) ? "true" : "false") << "\n";
	std::cout << "a == a " << ((a == a) ? "true" : "false") << "\n";
	std::cout << "b == b " << ((b == b) ? "true" : "false") << "\n";

	std::cout << "a != b " << ((a != b) ? "true" : "false") << "\n";
	std::cout << "b != a " << ((b != a) ? "true" : "false") << "\n";
	std::cout << "a != a " << ((a != a) ? "true" : "false") << "\n";
	std::cout << "b != b " << ((b != b) ? "true" : "false") << "\n";

	std::cout << "a < b " << ((a < b) ? "true" : "false") << "\n";
	std::cout << "b < a " << ((b < a) ? "true" : "false") << "\n";

	std::cout << "a <= b " << ((a <= b) ? "true" : "false") << "\n";
	std::cout << "b <= a " << ((b <= a) ? "true" : "false") << "\n";

	std::cout << "a > b " << ((a > b) ? "true" : "false") << "\n";
	std::cout << "b > a " << ((b > a) ? "true" : "false") << "\n";

	std::cout << "a >= b " << ((a >= b) ? "true" : "false") << "\n";
	std::cout << "b >= a " << ((b >= a) ? "true" : "false") << "\n";

	std::cout << "a + b " << (a + b) << "\n";
	std::cout << "b + a " << (b + a) << "\n";

	std::cout << "a - b " << (a - b) << "\n";
	std::cout << "b - a " << (b - a) << "\n";

	std::cout << "a * b " << (a * b) << "\n";
	std::cout << "b * a " << (b * a) << "\n";

	std::cout << "a / b " << (a / b) << "\n";
	std::cout << "b / a " << (b / a) << "\n";

	std::cout << "a = " << a << "\n";
	std::cout << "++a = " << ++a << "\n";
	std::cout << "a = " << a << "\n";
	std::cout << "a++ = " << a++ << "\n";
	std::cout << "a = " << a << "\n";
	std::cout << "--a = " << --a << "\n";
	std::cout << "a = " << a << "\n";
	std::cout << "a-- = " << a-- << "\n";
	std::cout << "a = " << a << "\n";

	std::cout << "max a b " << Fixed::max(a, b) << "\n";
	std::cout << "max b a " << Fixed::max(b, a) << "\n";	

	std::cout << "min a b " << Fixed::min(a, b) << "\n";
	std::cout << "min b a " << Fixed::min(b, a) << "\n";	

	return (0);
}